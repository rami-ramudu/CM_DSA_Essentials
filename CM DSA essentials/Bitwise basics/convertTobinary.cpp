#include<bits/stdc++.h>
using namespace std;
int convertToBinary(int num)
{
    int ans=0;
    int power=1;
    while(num)
    {
        ans=ans+(power*(num&1));
        power*=10;
        num>>=1;
    }
    return ans;
}
long long convertTodecimal(long long num)
{
    int ans=0;
    int power=1;
    int i=1;
    while(num)
    {
        
        ans+=(power*(num&1));
        cout<<ans<<" at the "<<i<<" th iteration\n";
        power*=2;
        num>>=1;
        i++;
    }
    return ans;
}
int main()
{
    cout<<"The decimal representation of 1101 is "<<convertTodecimal(1101)<<endl;
    return 0;
}