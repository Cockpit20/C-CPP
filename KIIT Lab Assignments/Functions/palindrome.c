#include<stdio.h>
int PALINDROME(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n==PALINDROME(n))
    printf("%d is a palindrome number",PALINDROME(n));
    else
    printf("%d is not a palindrome number",n);
}
int PALINDROME(int n)
{
    int b=n;
    int digit,s=0;
    while (b>0)
    {
        digit=b%10;
        s=s*10+digit;
        b=b/10;
    }
    return s;
}