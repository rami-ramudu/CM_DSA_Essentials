#include<bits/stdc++.h>
using namespace std;
void oddEven(int n)
{
    //these are some of the common operations in bitwise operators
    //we know that all odd numbers have their last bits as 1
    //all even numbers have their last bits as 0
    if(n&1) cout<<"ODD\n";
    else cout<<"EVEN\n";
}
//0 based bit 1<<i
//1 based bit 1<<i-1
void getithBit(int n,int i)
{
    int mask=(1<<i-1); //the mask has to be changed a little bit for 1 based bit
    int mask1=(1<<i); //this is the mask for 0 based bit
    string str=((n&mask1)>0)?"ith bit set":"ith bit not set";
    cout<<str<<endl;
}
//mask 1<<i for 0 based bit
//mask 1<<i-1 for 1 based bit
void clearithBit(int &n,int i)
{
    int mask=~(1<<i); //0 based bit
    int mask1=~(1<<i-1); //1 based bit
    n&=mask; //bitwise AND with the number to clear only the ith bit in the number
}
//mask 1<<i for 0 based bit
//mask 1<<i-1 for 1 based bit
void setithBit(int &n,int i)
{
    int mask=(1<<i);
    int mask1=(1<<i-1);
    n|=mask; //bitwise OR with the number to set only the ith bit in the number
}

//mask 1<<i for 0 based bit
//mask 1<<i-1 for 1 based bit
void updateithBit(int &n,int i,int val)
{
   //first clear the ith bit
   clearithBit(n,i);
   //here the value is either 0 or 1
   //either way we are going to left shift it and bitwise OR with the
   //number to update it
   int mask=(val<<i);
   int mask1=(val<<i-1);
   n|=mask;
}
//mask 1<<i for 0 based bit
//mask 1<<i-1 for 1 based bit
void clearLastiBits(int &n,int i)
{
    //left shift ~0 or -1 both are same and this
    //is going to be our mask
   int mask=(-1<<i);
   int mask1=(-1<<i-1);
   n&=mask1; //bitwise and with our number to clear all the last i bits
}

void clearbitsinRange(int &n,int i,int j)
{
    int a=(-1<<(j+1)); 
    int b=(1<<i)-1;
    int mask=a|b;
    n&=mask;
}

void powerofTwo(int n)
{
    //if (n&(n-1))==0,it's a power of two
    //else it is not a power of two

    if(!(n&(n-1))) cout<<"power of two\n";
    else cout<<"Not power of two\n";
}
int countSetBits(int n)
{
    int cnt(0);
    while(n)
    {
        cnt+=(n&1);
        n>>=1;
    }
    return cnt;
}

int countSetBitsHack(int n)
{
    //what this function is doing is that,it keeps on clearing the rightmost 
    //set bit until the number itself becomes 0
    //while doing that,we keep track of the number of iterations which
    //eventually is the answer for our question
    int cnt(0);
    while(n)
    {
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}
//very very important concept for competitive programming also
//also called binary exponentiation
int fastExpo(int base,int power)
{
    int ans=1;
    while(power)
    {
        int last_bit=(power&1); //this will give the last bit of a given number
    if(last_bit)
    {
       ans*=base;
    }
    base=base*base;
    power>>=1;
    }
    return ans;
}
int main()
{
//number to check
int n;
cin>>n;
//to check if odd or even
oddEven(n);
//for the position of the bit
int i,j;
cin>>i>>j;
//to check if ith bit is set or not
getithBit(n,i);
//to clear the ith bit
clearithBit(n,i);
cout<<n<<" after clearing ith bit\n";

//to set the ith bit
setithBit(n,i);
cout<<n<<" after setting ith bit\n";

//update ith bit
//set to 1
updateithBit(n,i,1);
cout<<n<<" after setting ith bit\n";
//clear the bit
updateithBit(n,i,0);
cout<<n<<" after clearing ith bit\n";

//clear last i bits
clearLastiBits(n,i);
cout<<n<<" after clearing last i bits\n";

 clearbitsinRange(n,i,j);
 cout<<n<<"After clearing bits from the range "<<i<<" to "<<j<<"\n";
 
 powerofTwo(16);
 powerofTwo(5);

 cout<<"The number of set bits in 15 is "<<countSetBits(15)<<" and in 0 is "<<countSetBits(0)<<"\n";
  cout<<"The number of set bits in 15 is "<<countSetBitsHack(15)<<" and in 0 is "<<countSetBitsHack(0)<<"\n";
  
  cout<<"The exponentiation of 3 power 5 is "<<fastExpo(3,5)<<endl;
    return 0;
}