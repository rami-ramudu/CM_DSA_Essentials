#include<bits/stdc++.h>
using namespace std;
pair<int,int>SortedPair(vector<int>arr,int x)
{
    pair<int,int>ans;
    int low=0;
    int n=arr.size();
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]>x) high--;
        else
        {
            ans.first=arr[low];
            ans.second=arr[high];
            low++;
        }
    }
    return ans;

}
int main()
{
    vector<int>arr={10,22,28,29,30,40};
    auto p=SortedPair(arr,54);
    cout<<"The pair is "<<p.first<<" and "<<p.second<<"\n";
    return 0;
}