#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr)
{
    int n=arr.size();
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

}
int main()
{
    vector<int>arr={29,30,40,10,22,28};
    bubbleSort(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}

