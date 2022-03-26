#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i, nv=0, nc=0;
printf("\nEnter a sentence :");
gets(s);
for(i=0; s[i]!='\0'; i++)
{
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
nv++;
else
nc++;
}
}
printf("Number of vowels present in the given sentence is %d", nv);
printf("\nNumber of consonants present in the given sentence is %d", nc);
}
