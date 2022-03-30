#include<stdio.h>
int main()
{
    char fn[25];
    char ln[25];
    printf("Enter your first name: ");
    scanf("%s",&fn);
    printf("Enter your last name: ");
    scanf("%s",&ln);
    printf("%s %c.\n",fn,ln[0]);
    printf("%c.%s\n",fn[0],ln);
    printf("%s %c.",ln,fn[0]);
}