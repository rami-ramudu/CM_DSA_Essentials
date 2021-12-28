#include<bits/stdc++.h>
using namespace std;
int rotatedBinarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key) return mid;

        //2 cases
        //check if the first part is sorted
        if(arr[start]<=arr[mid])
        {
            if(key>=arr[start] and key<=arr[mid])
            {
                end=mid-1;
            }
            else start=mid+1;
        }
        else
        {
            if(key>=arr[mid] and key<=arr[end])
            {
                start=mid+1;
            }
            else end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,1,2,3};
    int key=2;
    cout<<rotatedBinarySearch(arr,7,key);
    return 0;
}