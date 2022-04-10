#include<stdio.h>
int find_power(int a, int b);
int main()
{
    int a,b;
    printf("ENter the value of n and k:");
    scanf("%d %d",&a,&b);
    int power=find_power(a,b);
    printf("%d^%d=%d",a,b,power);
}
int find_power(int a, int b)
{
    int power=1;
    for (int i=1;i<=b;i++)
    {
        power=power*a;
    }
    return power;
}