#include<stdio.h>
int main()
{
    int n,s=0,b;
    printf("Enter the number:");
    scanf("%d",&n);
    b=n;
    do{
        s=s*10+b%10;
    }
    while(b=b/10);
    printf("The reverse number is %d",s);
    if(n==s)
    printf("\nEntered number is palindrome");
    else
    printf("\nEntered number is not palindrome");
}