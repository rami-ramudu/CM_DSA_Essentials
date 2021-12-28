#include<bits/stdc++.h>
using namespace std;
void bubbleSortRec(int arr[],int n)
{
   if(n==1) return;

  //inner loop remains the same is the first conversion
  //which effectively means that we are going to convert
  //the outer loop into the recursive code

  for(int j=0;j<n-1;j++)
  {
      if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
  }


   bubbleSortRec(arr,n-1);
}
void bubbleSortRec2(int arr[],int n,int j)
{
   if(n==1) return;
   

   //if j has reached the n-1th index means that we have completed 1
   //iteration so we have to reset it for another one
   if(j==n-1)
   {
       bubbleSortRec2(arr,n-1,0);
   }



  //inner loop will also be converted in form of recursion
  //which effectively means that we are going to convert
  //the outer loop as well as the inner loop into the recursive code

  for(int j=0;j<n-1;j++)
  {
      if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
  }


   bubbleSortRec2(arr,n-1,j+1);
}
int main()
{
    int arr[]={100000,1,2000,2100,210001,10};
    int n=6;
    bubbleSortRec(arr,n);
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
    bubbleSortRec2(arr,n,0);
    for(int i:arr) cout<<i<<" ";
    return 0;
}