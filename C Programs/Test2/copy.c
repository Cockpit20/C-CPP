#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],dst[100];
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        dst[i]=str[i];
        i++;
    }
    printf("%s",dst);
}