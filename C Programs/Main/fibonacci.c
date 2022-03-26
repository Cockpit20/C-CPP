#include<stdio.h>
int main()
{
    int a=0;
    int b=1;
    printf("%d ",a);
    printf("%d ",b);
    for (int i=0;i<20;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;b=c;
    }
}