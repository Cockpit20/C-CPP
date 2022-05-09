#include <stdio.h>
float res(float x,int n);
int main(void)
{
    int  n;
    float x;
    printf("Enter the value for x : ");
    scanf("%f", &x);
    printf("Enter the value for n : ");
    scanf("%d", &n);
    float sum=res(x,n);
    
    printf("Sum of the series = %.4f", sum);
}
float res(float x,int n)
{
    x = (x * 3.14159) / 180;
    float t = x;
    float sum = x;
    /* Loop to calculate the value of Sine */
    for (int i = 1; i <= n; i++)
    {
        t = (t * (-1)*x * x) / (2 * i*(2 * i + 1));
        sum = sum + t;
    }
    return (float)sum;
}