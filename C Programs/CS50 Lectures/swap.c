#include<stdio.h>
//swapping two numbers using pointer.
void swap (int *a, int *b);
int main()
{
    int x=1;
    int y=2;
    printf("x is %i, y is %i\n",x,y);
    swap(&x, &y);
    printf("x is %i, y is %i\n",x,y);
}
void swap (int *a, int *b)
{   
    int temp=*a;
    *a=*b;
    *b=temp;    
}