#include<bits/stdc++.h>
using namespace std;
//helper method used for the merge operation
void merge(int arr[],int start,int end)
{
     int i=start; //pointing to the start of the first array
     int mid=start+(end-start)/2; //to find the mid of the current passed array
     int j=mid+1; //pointing to the start of the second array

     int temp[end-start+1]; //effectively creating an array with
      //the number of elements under consideration
    
     int k=0;
     while(i<=mid and j<=end)
     {
         if(arr[i]<arr[j]) temp[k++]=arr[i++];
         else temp[k++]=arr[j++];
     }
     //to populate the rest of the elements which are left 
     //if any
     while(i<=mid) temp[k++]=arr[i++];
     while(j<=end) temp[k++]=arr[j++];

     //copying back into the original array
     k=0;
     for(int idx=start;idx<=end;idx++) arr[idx]=temp[k++];
     return;
}



void mergeSort(int arr[],int start,int end)
{
    //base case
    //array having only 1 element
    //which effectively means start==end
    //also we have to return when start>end
    //so implementing both of them together
    if(start>=end) return;


    //recursive case
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main()
{
    int arr[]={10,2,3000,80,4321,100,1};
    int n=7;
    int start=0,end=n-1;
    mergeSort(arr,start,end);
    for(int i:arr) cout<<i<<" ";

    return 0;
}