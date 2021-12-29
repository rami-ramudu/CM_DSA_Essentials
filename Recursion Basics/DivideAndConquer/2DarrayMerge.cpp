#include<bits/stdc++.h>
using namespace std;
void mergeRow(int m,int n,vector<vector<int>>&v,int k,int colStart,int colEnd)
{
    int i=colStart;  //start of the first submatrix
    int colMid=colStart+(colEnd-colStart)/2;
    int j=colMid+1; //start of the second submatrix
    vector<int>temp;
    while(i<=colMid and j<=colEnd)
    {
        if(v[k][i]<v[k][j])
        {
            temp.push_back(v[k][i]);
            i++;
        }
        else
        {
            temp.push_back(v[k][j]);
            j++;
        }
    }

    //if only one of those arrays exist
    while(i<=colMid)
    {
        temp.push_back(v[k][i]);
        i++;
    }
    while(j<=colEnd)
    {
        temp.push_back(v[k][j]);
        j++;
    }

    //copying back to the original array
    int x=0;
    for(int idx=colStart;idx<=colEnd;idx++)
    {
        v[k][idx]=temp[x];
        x++;
    }

}

void mergeCol(int m,int n,vector<vector<int>>&v,int k,int rowStart,int rowEnd)
{
    int i=rowStart;  //start of the first submatrix
    int rowMid=rowStart+(rowEnd-rowStart)/2;
    int j=rowMid+1; //start of the second submatrix
    vector<int>temp;
    while(i<=rowMid and j<=rowEnd)
    {
        if(v[i][k]<v[j][k])
        {
            temp.push_back(v[i][k]);
            i++;
        }
        else
        {
            temp.push_back(v[j][k]);
            j++;
        }
    }

    //if only one of those arrays exist
    while(i<=rowMid)
    {
        temp.push_back(v[i][k]);
        i++;
    }
    while(j<=rowEnd)
    {
        temp.push_back(v[j][k]);
        j++;
    }

    //copying back to the original array
    int x=0;
    for(int idx=rowStart;idx<=rowEnd;idx++)
    {
        v[idx][k]=temp[x];
        x++;
    }

}
void merge(int m,int n,vector<vector<int>>&v,int rowStart,int rowEnd,int colStart,int colEnd)
{
    //merging the rows
    for(int i=rowStart;i<=rowEnd;i++)
    {
        mergeRow(m,n,v,i,colStart,colEnd);
    }


    //merging the columns
    for(int i=colStart;i<=colEnd;i++)
    {
        mergeCol(m,n,v,i,rowStart,rowEnd);
    }
}
void _mergeSort(int m,int n,vector<vector<int>>&v,int rowStart,int rowEnd,int colStart,int colEnd)
{
    if(rowStart>=rowEnd and colStart>=colEnd) return;  //just only 1 element is left

    //divide the matrix into subarrays
    //for doing that we need the mid for
    //both row and column
    int rowMid=rowStart+(rowEnd-rowStart)/2;
    int colMid=colStart+(colEnd-colStart)/2;

    //now based on the mid we have to divide the 
    //matrix into 4 subarrays

    //Dividing intially on a whole column
    _mergeSort(m,n,v,rowStart,rowMid,colStart,colMid);
    _mergeSort(m,n,v,rowMid+1,rowEnd,colStart,colMid);

    //Dividing based on a whole row
     _mergeSort(m,n,v,rowStart,rowMid,colMid+1,colEnd);
    _mergeSort(m,n,v,rowMid+1,rowEnd,colMid+1,colEnd);


    //Merging all the 4 subarrays
    merge(m,n,v,rowStart,rowEnd,colStart,colEnd);
}
vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    // your code goes here
    _mergeSort(m,n,v,0,m-1,0,n-1);
    return v;
}

int main()
{
    vector<vector<int>>v=
    {
       {18,9,11},
       {1,4,15},
       {13,23,20}
    };
    // for(auto vec:v)
    // {
    //     for(auto i:vec) cout<<i<<" ";
    //     cout<<endl;
    // }
   auto ans= mergeSort(3,3,v);

    for(auto v:ans)
    {
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}