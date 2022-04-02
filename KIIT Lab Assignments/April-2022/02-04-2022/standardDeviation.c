#include<stdio.h>
#include<math.h>
float sum_avg_standardDeviation();
int main()
{
    float returnVal=sum_avg_standardDeviation();
    printf("The standard deviatiion is is %.2f",returnVal);
}
float sum_avg_standardDeviation()
{
    int n,s=0;
    float avg;
    for (int i=1;i<=10;i++)
    {
        printf("Enter the number:");
        scanf("%d",&n);
        s=s+n;
    }
    avg=(float)s/(float)10;
    float sd;
    for (int i=1;i<=10;i++)
    {
        printf("Enter the number again:");
        scanf("%d",&n);
        sd=sd+(n-avg)*(n-avg);
    }
    return sqrt(sd/10);
}