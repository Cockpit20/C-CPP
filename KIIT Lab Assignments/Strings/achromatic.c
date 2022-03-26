#include<stdio.h>
#include<string.h>
int main()
{
    char os[100],ns[100];
    int i,j=0;
    printf("\nEnter a string : ");
    gets(os);
    // s=" "+s;
    ns[j]=os[0];
    j++;
    for(i=0; os[i]!='\0'; i++)
    {
        if(os[i]==' ')
            {
                ns[j]=os[i+1];
                j++;
            }
    }
    ns[j]='\0';
    printf("\nThe required extracted string is %s", ns);
}