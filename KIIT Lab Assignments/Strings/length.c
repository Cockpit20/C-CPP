#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int length;
    printf("\nEnter a string : ");
    gets(s);
    // length = 0; 
    // while(s[length]!='\0')
    // length++;
    length=strlen(s);
    printf ("\nLength of the String is %d",length);
}