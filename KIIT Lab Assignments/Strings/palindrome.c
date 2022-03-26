
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
printf("Enter a string : ");
gets(s);
if (strcmp(s,strrev(s))==0)
printf("The entered string is palindrome.");
else
printf("The entered string is not palindrome.");
}