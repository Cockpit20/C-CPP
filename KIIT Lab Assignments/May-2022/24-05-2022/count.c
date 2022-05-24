#include <stdio.h>
int main()
{
    FILE *fp;
    int c=0;
    char ch;
    fp=fopen("pri.c", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if(ch=='a')
        c++;
    }
    printf("%d",c);
    fclose(fp);
}