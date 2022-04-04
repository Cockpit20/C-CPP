#include<stdio.h>
void swap(int *x,int *y);
void add_and_subtract(int *x,int *y);
int main()
{
    int a=34,b=74;
    printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d\n",a,b);
    add_and_subtract(&a,&b);
    printf("%d and %d\n",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void add_and_subtract(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-2*(*y);
    return;
}