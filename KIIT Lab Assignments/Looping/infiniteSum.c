#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int s=0;
    for (int i=1;i<=n;i++)
    {
        s=s+(i*(i+1)/2); 
        //s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
    }
    printf("The sum is= %d",s);
}