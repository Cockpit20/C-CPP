#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    printf("%d",(int)ch+10-48);
    else if(ch>=65 && ch<=90)
    printf("%c",(char)(ch+32));
    else if(ch>=97 && ch<=122)
    printf("The number is in lowercase!");
}