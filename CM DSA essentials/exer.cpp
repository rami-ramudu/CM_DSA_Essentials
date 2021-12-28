#include<bits/stdc++.h>
using namespace std;
vector<int> findAllOccurencesHelper(vector<int>v,int k,int i,vector<int>&ans,int n)
{
    if(i==n-1) return ans;

    if(v[i]==k) ans.push_back(i);
    return findAllOccurencesHelper(v,k,i+1,ans,n);
}
vector<int> findAllOccurences(int k, vector<int> v){
   int n=v.size();
   int i=0;
   vector<int>ans;
   return findAllOccurencesHelper(v,k,i,ans,n);


}

int main()
{
    vector<int>arr=
    {
        1,2,2,2,2,3,3,4,4,1,1,1,1,1,5,5,8
    };
    auto ans=findAllOccurences(1,arr);
    for(int i:ans) cout<<i<<" ";

    return 0;
}