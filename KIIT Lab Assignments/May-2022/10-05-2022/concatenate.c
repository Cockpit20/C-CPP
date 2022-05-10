#include<stdio.h>
int length(char *s1);
int main()
{
    char s1[100],s2[100],ch;
    printf("Enter first string: ");
    gets(s1);
    scanf("%c",ch);
    printf("Enter second string: ");
    gets(s2);
    int i=0;
    int j=length(s1);
    while(s1[j++]=s2[i++]);
    printf("After concatenation: %s",s1);


}
int length(char *s1)
{
    int i=0;
    while (s1[i] != '\0')
        ++i;
    return i;
}