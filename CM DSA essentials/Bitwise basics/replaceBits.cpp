#include<bits/stdc++.h>
using namespace std;
void clearbitsinRange(int &n,int i,int j)
{
    int a=(-1<<(j+1)); 
    int b=(1<<i)-1;
    int mask=a|b;
    n&=mask;
}
void Replacebits(int &n,int i,int j,int m)
{
    clearbitsinRange(n,i,j);
    int mask=(m<<i);
    n|=mask;
}
int main()
{
    int n,m,i,j;
    cin>>n>>m>>i>>j;

    Replacebits(n,i,j,m);
    cout<<"The number n after replacing the bits with m is "<<n<<"\n";
    return 0;
}