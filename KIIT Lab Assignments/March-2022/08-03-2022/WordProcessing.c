#include<stdio.h>
int main()
{
    char str[25]="WORDPROCESSING";
    printf("%s\n",str);
    for (int i=0;i<=3;i++)
    {
    printf("%c",str[i]);
    }
    printf(" ");
    for (int i=4;i<=13;i++)
    {
    printf("%c",str[i]);
    }
    printf("\n");
    for (int i=0;i<=3;i++)
    {
    printf("%c",str[i]);
    }
    printf("\n");
    for (int i=4;i<=13;i++)
    {
    printf("%c",str[i]);
    }
    printf("\n");
    printf("%c.%c.",str[0],str[4]);
}