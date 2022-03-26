#include<stdio.h>
int main()
{
    float is,t,rp,ip;
    int r1,r2,r3,voltage,rs;
    printf("Enter the three resistances: ");
    scanf("%d %d %d",&r1,&r2,&r3);
    printf("Enter the voltage: ");
    scanf("%d",&voltage);
    t=(float)1/r1+(float)1/r2+(float)1/r3;
    rs=r1+r2+r3;
    rp=1/t;
    is=(float)voltage/rs;
    ip=(float)voltage/rp;
    printf("The parallel resistance is %.2f ohms and the parallel current is %.2f ampere\n",rp,ip);
    printf("The series resistance is %d ohms and the series current is %.2f ampere",rs,is);
}