#include<stdio.h>
int main()
{
    int p;
    printf("Enter the time in seconds: ");
    scanf("%d",&p);
    int r=p%60;
    int q1=p/60;
    int r2=q1%60;
    int q=q1/60;
    printf("%d hr %d min %d s",q,r2,r);
}