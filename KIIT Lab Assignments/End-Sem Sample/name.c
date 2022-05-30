#include<stdio.h>
#include<string.h>

void replaceWithX(char so_name[])
{
    int i=0;
    while(so_name[i]!='\0')
    {
        if(so_name[i]=='a' || so_name[i]=='e' || so_name[i]=='i' ||so_name[i]=='o' || so_name[i]=='u' || so_name[i]=='A' || so_name[i]=='E' || so_name[i]=='I' || so_name[i]=='O' || so_name[i]=='U')
        so_name[i]='X';
        i++;
    }
    return;
}

void replaceSpacesWithS(char so_name[])
{
    int i=0;
    while(so_name[i]!='\0')
    {
        if(so_name[i]==' ')
        so_name[i]=so_name[0];
        i++;
    }
    return;
}

void insertKSpaces(char so_name[],char so_modified_so_name[])
{
    int k=6;
    for (int i = 0; i < strlen(so_name)*k; i++)
    {
        if(i%6==0)
        {
            so_modified_so_name[i]=so_name[i/6];
        }
        else
        so_modified_so_name[i]=' ';
    }
    return;
}

void convertToUppercase(char so_name[])
{
    int i=0;
    while(so_name[i]!='\0')
    {
        if(so_name[i]>=97 && so_name[i]<=122)
        so_name[i]=(char)(so_name[i]-32);
        i++;
    }
    return;
}




int main()
{
    char so_name[150];
    char so_modified_so_name[150];

    printf("Enter your so_name: ");
    gets(so_name);
    
    replaceWithX(so_name);

    replaceSpacesWithS(so_name);

    insertKSpaces(so_name,so_modified_so_name);

    convertToUppercase(so_modified_so_name);

    printf("%s",so_modified_so_name);
}