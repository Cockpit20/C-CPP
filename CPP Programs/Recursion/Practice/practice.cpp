#include<iostream>
using namespace std;

void pattern(int row,int col)
{
    if(row==0)
    {
        return;
    }
    if(col<row)
    { 
        printf("* ");
        pattern(row,col+1);
    }
    else
    {
        printf("\n");
        pattern(row-1,0);
    }
}

int main()
{
    pattern(5,0);
}