#include<bits/stdc++.h>
using namespace std;
int binarySearchHelper(vector<int>v,int x,int start,int end)
{
    if(start>end) return -1;

    int mid=start+(end-start)/2;
    if(v[mid]==x) return mid;
    else if(v[mid]<x) return binarySearchHelper(v,x,start+1,end);
    return binarySearchHelper(v,x,start,end-1);
}
int binarySearch(vector<int> v, int x)
{
    // your code goes here
    int start(0);
    int end=v.size()-1;
    return binarySearchHelper(v,x,start,end);
}
int main()
{
    vector<int>v={1,2,3,4,5,1000};
    cout<<binarySearch(v,1000);
     cout<<binarySearch(v,500);
    return 0;
}