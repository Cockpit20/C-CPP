#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("std.txt","r");
    fp2=fopen("copy.txt","w");
    while ((ch=fgetc(fp1))!= EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}