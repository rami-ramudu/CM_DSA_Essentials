#include<bits/stdc++.h>
using namespace std;
int ** createDynamic2Darray(int rows,int cols)
{
    //2D array creation part 
    int **arr=new int*[rows];

    int val=1;
    for(int i=0;i<rows;i++)
    {
        arr[i]=new int[cols];
    }

   //2D array values initialisation part
   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           arr[i][j]=val;
           val++;
       }
   }



    return arr;
}
int main()
{
    auto arr=createDynamic2Darray(3,4);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++) cout<<arr[i][j]<<" ";
    }
    return 0;
}