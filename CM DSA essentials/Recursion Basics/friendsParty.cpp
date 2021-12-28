#include<bits/stdc++.h>
using namespace std;
int friendsPairing(int n)
{
    //2 options
    //either a person can go singly
    //or can go as a pair
    //1)I am going (and) n-1 people are also going
    //2) I can choose 1 person from n-1 people (and) n-2 people are also going
    if(n<=2) return n;
    return friendsPairing(n-1)+(n-1)*friendsPairing(n-2); 
}
int main()
{
    cout<<friendsPairing(5)<<" ";
    return 0;
}