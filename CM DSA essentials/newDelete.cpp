#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    //points to the dynamic memory allocated in heap
    cout<<arr<<"\n";
    for(int i=0;i<n;i++) arr[i]=i;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    //deletes the actual dynamic array in heap but address is still stored in arr
    delete [] arr;

    //address is still stored in arr and gets erased only when the main function call gets over
    cout<<arr<<" ";
    return 0;
}