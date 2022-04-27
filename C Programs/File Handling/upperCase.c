#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100]="Hi , I am Soumyadeep Chandra";
    for (int i = 0; i < strlen(s); i++)
    {
        if(islower(s[i]))
        s[i]-=32;
    }
    printf("%s",s);
    
}