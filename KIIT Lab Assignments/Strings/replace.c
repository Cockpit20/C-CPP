#include<stdio.h>
#include<string.h>
int main()
{
char s[100], och, nch;
int i, flag=0;
printf("\nEnter a string :");
gets(s);
printf("Enter a character :");
scanf("%c", &och);
printf("Enter the new character :");
scanf("%c", &nch);
for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==och)
            {
            s[i]=nch;
            flag=1;
            }
    }
if(flag==1)
printf("After the replacement by new character, the string is %s", s);
else
printf("The given string does not contain the character %c", och);
}
