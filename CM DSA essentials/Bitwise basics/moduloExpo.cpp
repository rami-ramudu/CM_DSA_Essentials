#include<bits/stdc++.h>
using namespace std;
int fastExpo(int x,int y,int mod)
{
    int ans=1;
    while(y)
    {
       int last_digit=(y&1);
    if(last_digit)
    {
        
        ans=(ans%mod)*(x%mod);
    }
    x=(x%mod)*(x%mod);
    y>>=1;
    }
    return (ans%mod);
    
}
vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    // your code goes here
    int num_size=num.size();
    vector<bool>ans;
    int sum=0;
    for(int i:num) sum+=i;
    bitset<10000000>Bitset;
    Bitset[0]=1;
    for(int i=0;i<num_size;i++)
    {
        Bitset|=(Bitset<<num[i]);
    }
    
    for(int i=0;i<N;i++)
    {
        if(Bitset[query[i]]) ans.push_back(true);
        else ans.push_back(false);
        
    }
    return ans;
}
int power(int x, int y, int mod)
{
    // your code goes here
    return fastExpo(x,y,mod);
}
// bitset::operator[]



int main ()
{
  
  return 0;
}