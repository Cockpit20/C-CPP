#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Reverse case of %c is ",ch);
    if(ch>=97&&ch<=122)
    printf("%c",ch-32);
    else
    printf("%c",ch+32);
}