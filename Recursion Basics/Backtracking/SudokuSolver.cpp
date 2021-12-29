#include<bits/stdc++.h>
using namespace std;
void printBoard(int board[][9],int n)
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

bool isSafe(int mat[][9],int i,int j,int num,int n)
{
    //to check if the number is present in the row or the column
    for(int k=0;k<n;k++)
    {
        if(mat[k][j]==num or mat[i][k]==num) return false;
    }

    //to check in the subgrid also

    //if given with the ith and the jth index
    //we can find the starting point of the grid by
    //the following formula
    int starttingX=(i/3)*3;
    int starttingY=(j/3)*3;

    //iterating over the rows and columns of the subgrid
    for(int x=starttingX;x<starttingX+3;x++)
    {
        for(int y=starttingY;y<starttingY+3;y++)
        {
            if(mat[x][y]==num) return false;
        }
    }

    // if no problem exists,then it will return true
    return true;
}



bool sudokuSolver(int mat[][9],int i,int j,int n)
{
   //base case
   //if we find the solution we will print it and return true
   if(i==n)
   {
      //print solution later on

    printBoard(mat,n);
      //return true
      return true;

   }


   //recursive case

   //1st case will be if we reach the end of a row
   //which means j==n then it has to move to the next row
   if(j==n) return sudokuSolver(mat,i+1,0,n);


   //2nd case is to skip the prefilled cell
   if(mat[i][j]!=0) return sudokuSolver(mat,i,j+1,n);

   //to fill the current cell
   //try out all the possibilities for filling up the current cell
   for(int num=1;num<=n;num++)
   {
       //check if it is safe to place the current number at the current cell
       if(isSafe(mat,i,j,num,n))
       {
           //place the current number at the current cell
            mat[i][j]=num;
            int success=sudokuSolver(mat,i,j+1,n);
            if(success) return true;
       }
       
       
   }

   //backtracking step
   mat[i][j]=0; //the number at the current cell is reset
   return false;
}
int main()
{
    int board[9][9]=
    {
      {5,3,0,0,7,0,0,0,0},
      {6,0,0,1,9,5,0,0,0},
      {0,9,8,0,0,0,0,6,0},
      {8,0,0,0,6,0,0,0,3},
      {4,0,0,8,0,3,0,0,1},
      {7,0,0,0,2,0,0,0,6},
      {0,6,0,0,0,0,2,8,0},
      {0,0,0,4,1,9,0,0,5},
      {0,0,0,0,8,0,0,7,9}
    };
    
    if(!sudokuSolver(board,0,0,9)) cout<<"No solution exists!!!\n";
    return 0;
}