#include<bits/stdc++.h>
using namespace std;
//custom comparator for the purpose of sorting
//based on length+lexicographical order
bool comp(string a,string b)
{
    return a.length()==b.length()?a<b:a.length()<b.length();
}
void findSubsets(char *ip,char *op,int i,int j,vector<string>&list)
{
    //base case
    if(ip[i]=='\0')
    {
        op[j]='\0';
        string temp(op);
        list.push_back(temp);
        return;
    }
    //recursive case
    //include the current character
    op[j]=ip[i];
    findSubsets(ip,op,i+1,j+1,list);

    //not include the current character
    //which means move to the next character in the input array
    //stay in the same index at the output array
    findSubsets(ip,op,i+1,j,list);
}
int main()
{
    char input[100];
    char output[100];
    cin>>input;
    vector<string>list;
   
    findSubsets(input,output,0,0,list);
     //sorting the subsets based on lexicographical order
    sort(list.begin(),list.end());
    for(auto s:list) cout<<s<<"\n";
     //sorting the subsets based on length+lexicographical order
    sort(list.begin(),list.end(),comp);
    for(auto s:list) cout<<s<<"\n";
    
    return 0;
}