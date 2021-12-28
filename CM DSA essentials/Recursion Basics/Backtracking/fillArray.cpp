//backtracking using array
#include<bits/stdc++.h>
using namespace std;
void fillArray(int *arr,int i,int n,int val)
{
    //base case
    if(i==n) return;

    //recursive case
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);

    //backtracking step
    arr[i]=-1*val;
}
int main()
{
    int arr[6]={0};
    int n=6;
    fillArray(arr,0,n,1);

    for(int i:arr) cout<<i<<" ";

    return 0;
}