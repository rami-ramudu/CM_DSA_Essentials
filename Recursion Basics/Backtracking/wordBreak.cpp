#include<bits/stdc++.h>
using namespace std;
bool checkifPresent(string str,vector<string>&dict)
{
    int n=dict.size();
    for(int i=0;i<n;i++)
    {
        if(str==dict[i]) return true;
    }
    return false;
}
void wordBreakHelper(string str,vector<string>&dict,int &ways,int n)
{
    
   //recursive case
   //check if the current considered is in the dictionary or not
   for(int i=0;i<n;i++)
   {
        if(checkifPresent(str.substr(0,i+1),dict))
   {
       //base case here
        if(i==n-1)
    {
        ways++;
        return;
    }
       string sendString=str.substr(i+1,str.length());
       wordBreakHelper(sendString,dict,ways,sendString.length());
   }
   }
  

  

   //backtracking step
   //no specific backtracking step
   //just return to the previous function call
   return;
   

}
int wordBreak(string str, vector<string> &dictionary){
    int ways(0);
    wordBreakHelper(str,dictionary,ways,str.length());
	return ways;
}

int main()
{
    string str="Ilikesamsungmobile";
    vector<string>dictionary=
    {
        "I",
        "like",
        "sam",
        "sung",
        "samsung",
        "mobile"
    };
    cout<<"The number of ways is: "<<wordBreak(str,dictionary)<<endl;
    return 0;
}