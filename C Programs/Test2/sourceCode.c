#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("cyclicSort.c","r");
    fp2=fopen("cyclicSort.txt","w");
    char ch;
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}