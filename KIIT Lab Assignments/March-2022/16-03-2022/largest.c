#include<stdio.h>
int main()
{
    int a,b,c; 
    int max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (b>max)
    max=b;
    if (c>max)
    max=c;
    printf("The Largest Number is %d",max);
}