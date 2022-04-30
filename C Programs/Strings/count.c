#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    printf("Enter the string:");
    gets(s);
    int c=0,n=0,sc=0,sp=0;
    int i=0;
    while (s[i]!='\0')
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        c++;
        else if(s[i]>=48 && s[i]<=57)
        n++;
        else if(s[i]==' ')
        sp++;
        else
        sc++;
        i++;
    }
    printf("%d %d %d %d",c,n,sp,sc);
}