#include<stdio.h>
int main()
{
    float cp,sp,profit;
    printf("Enter the cost price of the item:Rs.");
    scanf("%f",&cp);
    printf("Enter the selling price of the item:Rs.");
    scanf("%f",&sp);
    profit=sp-cp;
    if (profit>0)
    printf("Profit gained is Rs.%.2f",profit);
    else
    printf("No profit gained");
}