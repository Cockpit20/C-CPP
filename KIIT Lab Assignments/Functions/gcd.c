#include<stdio.h>
int GCD(int,int);
int LCM(int,int);
int RECURSIVE(int,int);
int main()
{
    int n1,n2;
    printf("Enter number 1:");
    scanf("%d",&n1);
    printf("Enter number 2:");
    scanf("%d",&n2);
    printf("GCD=%d\n",GCD(n1,n2));
    printf("LCM=%d\n",LCM(n1,n2));
    printf("GCD=%d\n",RECURSIVE(n1,n2));
}
int GCD(int n1,int n2)
{
    int a=n1,b=n2;
    int temp,gcd,lcm;
    //hcf calculation
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    lcm=(a*b)/gcd;//lcm*gcd=n1*n2
    return gcd;
}
int LCM(int n1,int n2)
{
    int a=n1,b=n2;
    int temp,gcd,lcm;
    //hcf calculation
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    lcm=(a*b)/gcd;//lcm*gcd=n1*n2
    return lcm;
} 
int RECURSIVE(int n1,int n2)
{
    if (n1==n2)
    return n1;
    else if (n1>n2)
    RECURSIVE(n1-n2,n2);
    else
    RECURSIVE(n1,n2-n1);
}
