#include<bits/stdc++.h>
using namespace std;
void insertSort(vector<int>&arr)
{
    int n=arr.size();
    int j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        int temp=arr[i];
       while(j>=0 and arr[j]>temp)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
    }

}
int main()
{
    vector<int>arr={29,30,40,10,22,28};
    insertSort(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}