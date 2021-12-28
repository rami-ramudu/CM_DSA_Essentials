#include<bits/stdc++.h>
using namespace std;
void countSort(vector<int>&arr)
{
    int n=arr.size();
    int max_elem=*max_element(arr.begin(),arr.end());
    vector<int>count(max_elem+1,0);
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<count.size();i++)
    {
       while(count[i])
       {
           arr[j]=i;
           count[i]--;
           j++;
       }
    }

}
int main()
{
    vector<int>arr={29,30,40,10,22,28,0,1,12,1000,1000,1};
    countSort(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}