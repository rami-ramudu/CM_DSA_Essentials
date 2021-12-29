#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
     int i=start-1;
     int pivot=arr[end]; //always the last element is the pivot
     for(int j=start;j<=end-1;j++)
     {
         if(arr[j]<pivot) swap(arr[++i],arr[j]);
         
     }
     swap(arr[i+1],arr[end]); //In this line arr[end] only will be right 
     //because of swapping a lot of elements would have been changed
     return i+1; //the current index of the pivot is i+1 now
}
void QuickSort(int arr[],int start,int end)
{
    //base case
    if(start>=end) return;

    int p=partition(arr,start,end);
    QuickSort(arr,start,p-1);
    QuickSort(arr,p+1,end);

}
int main()
{
 
    int arr[]={10,2,3000,80,4321,100,1};
    int n=7;
    int start=0,end=n-1;
    QuickSort(arr,start,end);
    for(int i:arr) cout<<i<<" ";
return 0;
}