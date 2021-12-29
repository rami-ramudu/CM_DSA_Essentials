#include<bits/stdc++.h>
using namespace std;
//pushing the natural numbers into the vector
// #include<bits/stdc++.h>
// using namespace std;
// void incr(int n,vector<int>&ans)
// {
//    if(n==0) return;
//     incr(n-1,ans);
//    ans.push_back(n);
// }
// vector<int> increasingNumbers(int n) {
//     vector<int>ans;
//     incr(n,ans);
//     return ans;
// }
void decr(int n)
{
   if(n==0) return;

    cout<<n<<"\n";
    decr(n-1);
  
}
int main()
{
    incr(3-);
    decr(10);
    return 0;
}