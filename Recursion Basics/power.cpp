#include<bits/stdc++.h>
using namespace std;

//This is the power function which uses linear time complexity
//to compute a^b
long long power(int base,int pow)
{
    if(!pow) return 1;
    return base*power(base,pow-1);
}
//This is an optimised function that takes care of
//all the cases as well as compute power in logn time
long long powerOptimised(int base,int pow)
{
    if(!pow) return 1;
    if(pow%2==0)
    {
        base=base*base;
        pow/=2;
        return powerOptimised(base,pow);
    }
    return base*powerOptimised(base,pow-1);
    
}
int main()
{
    cout<<"The power of 3^5 is "<<power(10,2)<<" ";
     cout<<"The power of 3^5 is "<<powerOptimised(7,2)<<" ";
    return 0;
}