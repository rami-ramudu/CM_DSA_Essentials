#include<bits/stdc++.h>
using namespace std;
//printboard

bool canPlaceQueen(int board[][20],int n,int i,int j)
{
    //check the straight column above the current place into
    //consideration
    
}
void printBoard(int board[][20],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//here i is the row we are currently at
bool solveNQueens(int n,int board[][20],int i)
{
   //base case
   //if base case is met,then print the board and return
   if(i==n)
   {
       printBoard(board,n);
       return true;
   }



   //recursive case
   //try to place the queen in every row
   //now iterate over every column and try to place the queen
   for(int j=0;j<n;j++)
   {
       //now check if the current i,j position is safe or not
       if(canPlaceQueen(board,n,i,j))
       {
           board[i][j]=1;
           int success=solveNQueens(n,board,i+1);
           if(success) return true;
           //backtracking step after the function call
           board[i][j]=0;

       }
   }

   //if it comes out of the loop even after the backtracking step
   //it means that there is a problem with the parent
   //so the current function call will return false

   return false;
   
}
int main()
{
    int board[20][20]={0};
    int n;
    cin>>n;
    return 0;
}