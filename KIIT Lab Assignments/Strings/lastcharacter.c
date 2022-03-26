#include<stdio.h>
#include<string.h>
int main()
{
    char os[100],ns[100],rs[100];
    int i,j=0;
    printf("\nEnter a string : ");
    gets(rs);
    ns[j]=rs[0];
    j++;
    for(i=0; rs[i]!='\0'; i++)
    {
        if(rs[i]==' ')
            {
                ns[j]=rs[i+1];
                j++;
            }
    }
    ns[j]='\0';
    printf("\nThe required extracted string is %s", ns);
}