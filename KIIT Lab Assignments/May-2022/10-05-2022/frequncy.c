#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i=0,c=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character:");
    scanf("%c",&ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        c++;
        i++;
    }
    printf("Frequency of %c in %s is %d",ch,str,c);

}