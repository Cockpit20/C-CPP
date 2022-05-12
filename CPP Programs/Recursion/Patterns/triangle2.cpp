#include<iostream>
using namespace std;


void pattern1(int row,int col)
{
    if(row==0)
    return;
    if(col<row)
    {
        pattern1(row,col+1);
        cout<<"*";
    }
    else
    {
        pattern1(row-1,0);
        cout<<endl;
    }
}
int main()
{
    pattern1(4,0);
}