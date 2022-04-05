#include<stdio.h>
int sum(int *x,int *y);
int main()
{
    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    printf("%d+%d=%d",n1,n2,sum(&n1,&n2));
}
int sum(int *x,int *y)
{
    return *x+*y;
}