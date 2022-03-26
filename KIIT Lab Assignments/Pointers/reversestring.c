#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int l=strlen(str);
char *ptr;
printf("Enter a string: ");
gets(str);
//assign address of str to ptr
ptr=str+l-1;
printf("Entered string is: ");
while(*ptr!='\0')
printf("%c",*ptr--);
}