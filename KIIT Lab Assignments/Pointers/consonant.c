#include <stdio.h>
int main()
{
char s[100];
char *ptr;
int nov,noc;
printf("\nEnter a string: ");
gets(s);
//assign address of s to ptr
ptr=s;
nov=0;
noc=0;
while(*ptr!='\0')
{
    if (*ptr>='A'&&*ptr<='Z'||*ptr>='a'&&*ptr<='z')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o'
        ||*ptr=='u')
        nov++;
        else
        noc++;
    }
    //increase the pointer, to point next character
    ptr++;
    
}
printf("\nTotal number of VOWELS: %d", nov);
printf("\nTotal number of VOWELS: %d", noc);
}