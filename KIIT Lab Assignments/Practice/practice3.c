#include<stdio.h>
#include<string.h>

int main()
{
    char name[150],modified_name[150];
    gets(name);

    int i=0,count=0;
    while(name[i]!='\0')
    {
        if(name[i]=='A' || name[i]=='E' ||name[i]=='I' ||name[i]=='O' ||name[i]=='U' ||name[i]=='a' ||name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u' )
        count++;
        i++;
    }

    printf("Number of vowels= %d \n",count);

    int k=21052925%10;

    for (i = 0; i <= strlen(name)*(k+1); i++)
    {
        if(i%6==0)
        {
            modified_name[i]=name[i/6];
        }
        else
        modified_name[i]=' ';
    }

    for (i = 0; i <= strlen(name)*(k+1)-k-1; i++)
    {
        if(modified_name[i]==' ')
        modified_name[i]=name[0];
    }

    printf("%s",modified_name);

    

}