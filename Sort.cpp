#include<iostream>
using namespace std;

void quicksort(int arr[],int si,int ei){
    int c,i,j,temp;

     if(si < ei){
         c = si;
         i = si;
         j = ei;

         while(i < j){
             while(arr[i] <= arr[c] && i < ei)
                 i++;
             while(arr[j] > arr[c])
                 j--;
             if(i <j){
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
             }
         }

         temp = arr[c];
         arr[c] = arr[j];
         arr[j] = temp;
         quicksort(arr,si,j-1);
         quicksort(arr,j+1,ei);
    }
}
int main()
{
    int s=7,n=0;

int arr[]={9,4,5,6,7,3,8};




quicksort(arr,0,s-1);
n=0;
while(n<s)
{
cout<<arr[n]<<" ";
n++;
}
}
