#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int digits = (int)log10(n) + 1;
    n = (int)(n / pow(10, digits / 2))% 10;
    printf("The middle digit is %d",n);
}