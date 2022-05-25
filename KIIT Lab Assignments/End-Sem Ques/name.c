#include<stdio.h>
#include<string.h>

void replaceWithX(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
        name[i]='X';
        i++;
    }
    return;
}

void insertKSpaces(char name[])
{
}

void convertToUppercase(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        if(name[i]>=97 && name[i]<=122)
        name[i]=(char)(name[i]-32);
        i++;
    }
    return;
}



int main()
{
    char name[150];

    printf("Enter your name: ");
    gets(name);
    
    replaceWithX(name);

    insertKSpaces(name);

    convertToUppercase(name);

    printf("%s",name);
}