#include<bits/stdc++.h>
using namespace std;
int calcMarks(vector<int>a)
{
    int sum=0;
    for(int i:a) sum+=i;
    return sum;

}
bool comp(pair<string,vector<int>>a,pair<string,vector<int>> b)
{
    return calcMarks(a.second)>calcMarks(b.second);
}
int main()
{
    vector<pair<string,vector<int>>> database=
    {
       {"Ram",{2,2}},
       {"Subha",{0,1}},
       {"Aadvik",{1,1}}
    };
    sort(database.begin(),database.end(),comp);
    for(auto p:database)
    {
        cout<<p.first<<" ";
    }
    return 0;
}