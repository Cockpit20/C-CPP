#include<stdio.h>
int main()
{
    int pt,st,pv,sv;
    printf("Enter the primary voltage:");
    scanf("%d",&pv);
    printf("\nEnter the primary turns:");
    scanf("%d",&pt);
    printf("\nEnter the secondary turns:");
    scanf("%d",&st);
    sv=(pv*st)/pt;
    printf("\nSecondary voltage is %d volts",sv);
}