#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int search,int n)
{
   if(n==0) return -1;
   if(arr[0]==search) return 0;
   int i=firstOccurence(arr+1,search,n-1);
   if(i!=-1) return i+1;
    
   return -1;
}
int lastOccurence(int arr[],int search,int n)
{
   if(n==0) return -1;
   int i=lastOccurence(arr+1,search,n-1);
   if(i!=-1) return i+1;
    if(arr[0]==search) return 0;
   return -1;
}
int main()
{
    int arr[]={1,3,5,1,9,100,100,100,100,100,100,100,100};

    cout<<"The index at which the element is present first is :"<<firstOccurence(arr,100,13);
     cout<<"The index at which the element is present last is :"<<lastOccurence(arr,100,13);
    return 0;
}