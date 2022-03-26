
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int l;
printf("Enter a string : ");
gets(s);
l=strlen(s);
printf("The reverse of the string is: ");
for (int i=l-1;i>=0;i--)
printf("%c",s[i]);
// printf("The reverse of the string is %s",strrev(s));
// puts(s);
}