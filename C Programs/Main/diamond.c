#include<stdio.h>
int main()
{
    int n=5;
    int space=n-1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=space;j++)
        printf(" ");
        (space)--;
        for (int j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    space=1;
    for (int i=1;i<=5-1;i++)
    {
        for (int j=1;j<=space;j++)
        printf(" ");
        space++;
        for (int j=1;j<=2*(n-i)-1;j++)
        printf("*");
        printf("\n");
    }   
}