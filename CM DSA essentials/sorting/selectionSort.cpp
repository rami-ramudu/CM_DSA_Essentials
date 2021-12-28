#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    //for descending order
    return a>b;
}
bool comp1(int a,int b)
{
    //for ascending order
    return a>b;
}
void selectionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int min_pos=i;
        int temp=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(comp1(arr[j],arr[min_pos]))
            {
                min_pos=j;
            }
        }
        swap(arr[i],arr[min_pos]);
    }

}
int main()
{
    vector<int>arr={29,30,40,10,22,28};
    selectionSort(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}