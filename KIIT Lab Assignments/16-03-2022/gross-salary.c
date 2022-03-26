#include<stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("Enter basic salary: ");
    scanf("%f",&bs);
    if(bs<1500)
    gs=bs+bs*10/100+bs*40/100;
    else
    gs=bs+500+bs*50/100;
    printf("Gross Salary= Rs. %.2f",gs);
}