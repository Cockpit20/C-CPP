#include<stdio.h>
int sum(int a, int b,int c);
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int s=sum(a,b,c);
    printf("%d+%d+%d=%d",a,b,c,s);
}
int sum(int a, int b, int c)
{
    int s=a+b+c;
    return s;
}