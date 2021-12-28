#include<bits/stdc++.h>
using namespace std;
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    // your code goes here
    int m=v.size(); //number of rows
    int n=v[0].size(); //number of columns
    vector<vector<int>> aux(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<aux[i][j]<<" ";
        }
        cout<<endl;
    }
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            
                if(i>=1)
                aux[i][j]+=aux[i-1][j];
                if(j>=1)
                aux[i][j]+=aux[i][j-1];
                if(i>=1 and j>=1)
                aux[i][j]-=aux[i-1][j-1];
        }
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<aux[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int res=aux[er][ec];
    if(sc>0) res-=aux[er][sc-1];
    if(sr>0) res-=aux[sr-1][ec];
    if(sr>0 and sc>0) res+=aux[sr-1][sc-1];
    return res;
}
int main()
{
    vector<vector<int>> v={
     {1,2,3,4,6},
     {5,3,8,1,2},
     {4,6,7,5,5}
    };
    cout<<sum(v,1,2,2,4);
    return 0;
}