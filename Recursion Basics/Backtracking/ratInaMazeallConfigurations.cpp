//to find all the possible configurations
//and store them 
#include<bits/stdc++.h>
using namespace std;
void ratAndMiceHelper(vector<string>arr,vector<vector<int>>final,vector<vector<int>>&ans,int n,int m,int i,int j,vector<vector<vector<int>>>&finalAns)
{
   
    //base case
    //1)if reached the final position just return
    if(i==n-1 and j==m-1)
    {
        //just return
        for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				final[k][l] = ans[k][l];
			}
		}
        finalAns.push_back(final);
		return;
       
    }
    
    //recursive case
    //actual computation
   
    //going left
     
    if(i>0 and arr[i-1][j]=='O' and ans[i-1][j]!=1) 
    {
       ans[i-1][j]=1;
        ratAndMiceHelper(arr,final,ans,n,m,i-1,j,finalAns);
         ans[i-1][j]=0;
    }
    
    //going up
    if(j>0 and arr[i][j-1]=='O' and ans[i][j-1]!=1) 
    {
       ans[i][j-1]=1;
        ratAndMiceHelper(arr,final,ans,n,m,i,j-1,finalAns);
         ans[i][j-1]=0;
    }
    ////going down
     if(i<n-1 and arr[i+1][j]=='O' and ans[i+1][j]!=1) 
    {
       ans[i+1][j]=1;
       ratAndMiceHelper(arr,final,ans,n,m,i+1,j,finalAns);
         ans[i+1][j]=0;
    }
    
    //going right
    if(j<m-1 and arr[i][j+1]=='O' and ans[i][j+1]!=1) 
    {
       ans[i][j+1]=1;
       ratAndMiceHelper(arr,final,ans,n,m,i,j+1,finalAns);
         ans[i][j+1]=0;
    }
   // return;
}
vector<vector<vector<int>>> ratAndMice(vector<string> arr) {
  
    int n=arr.size();  //the dimension n of the grid
    int m=arr[0].length();  //the dimension m of the grid
    vector<vector<vector<int>>>finalAns;
     vector<vector<int>>final(n,vector<int>(m,0));
    vector<vector<int>>ans(n,vector<int>(m,0)); //to store the final answer
    ans[0][0]=1;
    ratAndMiceHelper(arr,final,ans,n,m,0,0,finalAns);
    
    return finalAns;


}
int main()
{
    vector<string> arr={
        "OXOO",
        "OOOX",
        "XOOO",
        "XOOX",
        "XXOO"
    };
    
   
    auto ans1=ratAndMice(arr);
    int cnt(0);
    for(auto ans:ans1)
    {
        cnt++;
        for(auto v:ans)
        {
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<cnt<<" ";
    return 0;
}