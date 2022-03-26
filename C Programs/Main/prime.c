#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<=1)
    printf("%d is neiether prime nor composite",n);
    int c=2;
    while ((c*c)<=n)
    {
        if (n%c==0)
        printf("%d is not prime",n);
        c++;
    }
    printf("%d is prime",n);
}