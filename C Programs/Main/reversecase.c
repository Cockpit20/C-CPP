#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Reverse case of %c is ",ch);
    if(islower(ch))
    printf("%c",toupper(ch));
    else
    printf("%c",tolower(ch));
}