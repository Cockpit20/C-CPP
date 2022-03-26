#include<stdio.h>
int main()
{
    int a; int t=10; float r=0.0875; 
    float returnamount; 
    printf("Enter an investment amount: ");
    scanf("%d",&a);
    returnamount=(float)a*(1+r*t);
    printf("The return amount is Rs.%.2f",returnamount);
}