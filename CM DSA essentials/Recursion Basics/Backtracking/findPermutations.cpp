#include<bits/stdc++.h>
using namespace std;
void findPermutations(string str,int i,int n)
{
   //base case
   if(i==n-1)
   {
       cout<<str<<"\n";
       return;
   }
   for(int j=i;j<n;j++)
   {
       swap(str[i],str[j]);
       findPermutations(str,i+1,n);
       swap(str[i],str[j]);
   }
}
int main()
{
    string str="abc";
    int n=3;
    findPermutations(str,0,n
    i8);
    return 0;
}