#include<stdio.h>
int main()
{
    int n1,n2;

    int temp,gcd,lcm;
    printf("Enter number 1:");
    scanf("%d",&n1);
    printf("Enter number 1:");
    scanf("%d",&n2);
    int a=n1,b=n2;
    //hcf calculation
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    lcm=(a*b)/gcd;//lcm*gcd=n1*n2
    printf("LCM=%d\n",lcm);
    printf("GCD=%d",gcd);
}