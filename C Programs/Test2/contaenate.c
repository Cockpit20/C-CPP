#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("After concatenation: %s",str1);
    
}