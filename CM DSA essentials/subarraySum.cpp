#include<bits/stdc++.h>
using namespace std;
void printLargestSubarraySum(int arr[],int n)
{
    //bruteForce 
    //TC:O(n^3)
    //SC:O(1)
   int large(0);
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           int small(0);
           for(int k=i;k<=j;k++)
           {
             small+=arr[k];
           }
           large=max(large,small);
       }
   }
   cout<<large<<" ";
}

void printLargestSubarraySum2(int arr[],int n)
{
    //Slightly optimised using prefix sums
    //TC:O(n^2)
    //SC:O(n)
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
   int large(0);
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           int small(0);
           small=i>0? prefix[j]-prefix[i-1]:prefix[j];
           large=max(large,small);
       }
   }
   cout<<large<<" ";
}
void printLargestSubarraySum3(int arr[],int n)
{
    // optimised using kadane's algorithm
    //TC:O(n)
    //SC:O(1)
    
   int large=arr[0];
   int small=arr[0];
   for(int i=1;i<n;i++)
   {
       small=max(small+arr[i],0);
       

       large=max(small,large);
       
   }
   cout<<large<<" ";
}
int main()
{
    int arr[]={-1,-2,-3,-4};
    printLargestSubarraySum(arr,9);
    printLargestSubarraySum2(arr,9);
    printLargestSubarraySum3(arr,9);
    return 0;
}