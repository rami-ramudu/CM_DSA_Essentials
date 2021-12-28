// Count the number of ways to tile the floor of size n x m using 1 x m size tiles
// Difficulty Level : Medium
// Last Updated : 19 Apr, 2021
// Given a floor of size n x m and tiles of size 1 x m. The problem is to count the number of ways to tile the given floor using 1 x m tiles. A tile can either be placed horizontally or vertically. 
// Both n and m are positive integers and 2 < = m.
// Examples: 
 

// Input : n = 2, m = 3
// Output : 1
// Only one combination to place 
// two tiles of size 1 x 3 horizontally
// on the floor of size 2 x 3. 

// Input :  n = 4, m = 4
// Output : 2
// 1st combination:
// All tiles are placed horizontally
// 2nd combination:
// All tiles are placed vertically.
 
//             |  1, 1 < = n < m
//  count(n) = |  2, n = m
//             | count(n-1) + count(n-m), m < n

#include<bits/stdc++.h>
using namespace std;
int tillingProblem(int n, int m){
    if(n>=1 and n<m) return 1;
    if(n==m) return 2;
    //if(n==0 or m==0) return 0;
    return tillingProblem(n-1,m)+tillingProblem(n-m,m);
}

int main()
{
    cout<<tillingProblem(4,3)<<" ";
    return 0;
}