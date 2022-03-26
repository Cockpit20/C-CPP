#include<stdio.h>
int main()
{
    int n;int p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d * %d\t=%d.\n",n,i,p);
    }
}