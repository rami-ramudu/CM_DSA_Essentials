//very very important problem to understand
//Do not freak out

#include<bits/stdc++.h>
using namespace std;
void binaryStringHelper(int n,int i,vector<string>&ans,string str)
{
    if(i==n)
    {
        ans.push_back(str);
        return;
    }
    string s=str;
    s.push_back('0');
    binaryStringHelper(n,i+1,ans,s);

    if(i>0 and str[i-1]=='0')
    {
        str.push_back('1');
        binaryStringHelper(n,i+1,ans,str);
    }

    if(i==0)
    {
        str.push_back('1');
        binaryStringHelper(n,i+1,ans,str);
    }
}
vector<string> binaryStrings(int n){
    // do not modify any default function or parameter you can use helper function if needed
    vector<string>ans;
    string str="";
    int i=0;
    binaryStringHelper(n,i,ans,str);
    return ans;
}
int main()
{
    int n=5;
    auto ans=binaryStrings(n);
    for( auto s:ans) cout<<s<<"\n";
    return 0;
}