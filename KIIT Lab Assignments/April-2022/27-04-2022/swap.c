#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}