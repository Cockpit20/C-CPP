#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];int c=0;
    printf("Enter a string: ");
    scanf("%s",str);
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]=='a')
        c=c+1;
    }
    if (c>0)
    printf("%c is found in the string %s, %d times",'a',str,c);
    else
    printf("%c is not found in the string %s.",'a',str,c);
}