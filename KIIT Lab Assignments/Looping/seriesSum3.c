#include <stdio.h>
#include <math.h>
int fact(int num);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + ((float)i/(float)fact(i));
    }
    printf("The sum of the series is %.2f", sum);
}
int fact(int num)
{
    if(num==0||num==1)
    return 1;
    else
    return num*fact(num-1);
}
//1+2/2!+3/3!+4/4!+...n/n!