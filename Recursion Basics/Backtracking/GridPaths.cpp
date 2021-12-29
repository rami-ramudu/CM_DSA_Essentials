//here the source cell and the destination cell
//will be (0,0) and (m-1,n-1)
//we have to find out all the possible number ways to
//reach from the source and destination
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++) fact*=i;
    return fact;
    
}
int gridPathsMathTrick(int m,int n)
{
    int numerator=fact(m+n-2);
    int denom=fact(m-1)*fact(n-1);
    return numerator/denom;
}
int gridPaths(int m,int n,int i,int j)
{
    if(i==m-1 and j==n-1) return 1;
    if(i>=m  or j>=n) return 0;
    return gridPaths(m,n,i+1,j)+gridPaths(m,n,i,j+1);
}
int main()
{
    cout<<"The number of ways is: "<<gridPaths(3,3,0,0)<<endl;
    cout<<"The number of ways is: "<<gridPathsMathTrick(3,3);
    return 0;
}