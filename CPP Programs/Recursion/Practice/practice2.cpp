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
        pattern(row,col+1);
        printf("* ");
    }
    else
    {
        pattern(row-1,0);
        printf("\n");
    }
}

int main()
{
    pattern(5,0);
}