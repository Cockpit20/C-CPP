#include<stdio.h>
#include<string.h>
void mystrcpy(char ns[],char os[]);
int main()
{
char s[100], d[100];
printf("\nEnter a string : ");
gets(s);
// strcpy(d, s);
mystrcpy(d,s);
printf("Sourse String is ");
puts(s);
printf("Destination String is ");
puts(d);
}
void mystrcpy(char ns[],char os[])
{
    int i=0;
    while(os[i]!='\0')
    {
        ns[i]=os[i];
        i++;
    }
    ns[i]='\0';
}