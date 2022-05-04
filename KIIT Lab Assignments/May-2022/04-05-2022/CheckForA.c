#include<stdio.h>
int main()
{
    char *p[5];
    char a[]="Yudhisthir";
    char b[]="Bhim";
    char c[]="Arjun";
    char d[]="Nakul";
    char e[]="Sahadev";
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; p[i][j]!='\0'; j++)
        {
            if(p[i][j]=='a')
            count++;
        }
    }
    printf("%d",count);
}