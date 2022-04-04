#include<stdio.h>
int isPalindrome(int n);
int main()
{
    int number;
    printf("Enter a number to check whether it is palindrome or not:");
    scanf("%d",&number);
    //Your task is to implement this function
    if(isPalindrome(number))
    printf("This number is palindrome\n");
    else
    printf("This number is not palindrome\n");
}
int isPalindrome(int n)
{
    int b=n;
    int digit,rev=0;
    while(b>0)
    {
        digit=b%10;
        rev=rev*10+digit;
        b=b/10;
    }
    return n==rev;
}