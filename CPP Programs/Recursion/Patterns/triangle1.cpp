#include<iostream>
using namespace std;


void pattern1(int row,int col)
{
    if(row==0)
    return;
    if(col<row)
    {
        cout<<"*";
        pattern1(row,col+1);
    }
    else
    {
        cout<<endl;
        pattern1(row-1,0);
    }
}
int main()
{
    pattern1(4,0);
}