#include<bits/stdc++.h>
using namespace std;
string spellLast(int n)
{
    switch(n)
    {
        case 0:
               return "zero";
               break;
        case 1:
                return "one";
                break;
        case 2:
                return "two";
                break;
        case 3:
                return "three";
                break;
        case 4:
                return "four";
                break;
        case 5:
                return "five";
                break;
        case 6:
                return "six";
                break;
        case 7:
                return "seven";
                break;
        case 8:
                return "eight";
                break;
        case 9:
                return "nine";
                break;

    }
    return "";
}
void wordSpell(int n)
{
   
   if(n==0) return ;

   int last_digit=n%10;
   wordSpell(n/10);
   cout<<spellLast(last_digit)<<" ";
}


int main()
{
    //string str="";
   wordSpell(2021);
    //cout<<str<<" ";
    return 0;
}