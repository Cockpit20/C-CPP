#include<stdio.h>
int main()
{
    int n1,n2;
    int *x,*y;
    x=&n1;
    y=&n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",x,y);
    int sum=*x+*y;
    printf("%d+%d=%d",*x,*y,sum);
}