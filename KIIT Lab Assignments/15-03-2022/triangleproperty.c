#include<stdio.h>
int main()
{
    int a,b,c;
    int t;
    printf("Give the value of side A:");
    scanf("%d",&a);
    printf("Give the value of side B:");
    scanf("%d",&b);
    printf("Give the value of side C:");
    scanf("%d",&c);
    t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
    printf("\nDo they satisfy triangle property?");
    printf("\nDisplay 1 for yes, 0 for No:%d",t);
}