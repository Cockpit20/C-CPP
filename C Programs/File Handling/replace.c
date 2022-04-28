#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("std.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        //Write your code here
    }
    fclose(fp);
}