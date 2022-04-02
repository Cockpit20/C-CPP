#include<stdio.h>
char changeCase(char ch);
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    char rch=changeCase(ch);
    printf("The uppercase of %c is %c",ch,rch);
}
char changeCase(char ch)
{
    if(ch>=65 && ch<=90)
    return ch;
    else
    return (ch-32);
}