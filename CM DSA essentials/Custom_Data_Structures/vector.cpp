//complete implementation of a vector in C++ STL
#include<iostream>
#include"vector.h"
using namespace std;
int main()
{
    //vector of characters
    Vector<char>chars;
    chars.push_back('a');
    chars.push_back('b');

    for(int i=0;i<chars.size();i++)
    {
        cout<<chars[i]<<" ";
    }


    //vector of integers
    Vector<int>v(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1000);
    v.push_back(8000);
    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(5)<<endl;

    //for printing all the elements of a vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
    //printing after overloading the [] operator
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}