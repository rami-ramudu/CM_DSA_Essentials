#include<bits/stdc++.h>
using namespace std;
//Method 1 using the same array addresses and the value of n itself
bool sortedArrayCheck(int arr[],int n)
{
    if(n==1) return true;

    return (arr[0]<arr[1]) and sortedArrayCheck(arr+1,n-1);
}
//Method 2 using indices
bool sortedArrayCheck2(int arr[],int i,int n)
{
    if(i==n-1) return true;

    return (arr[i]<arr[i+1]) and sortedArrayCheck2(arr,i+1,n);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int arr1[]={5,4,3,2,1};
    
    cout<<sortedArrayCheck(arr,5)<<endl;
    cout<<sortedArrayCheck(arr1,5)<<endl;

    cout<<sortedArrayCheck2(arr,0,5)<<endl;
    cout<<sortedArrayCheck2(arr1,0,5)<<endl;
    return 0;
}