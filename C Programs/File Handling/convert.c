#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp, *fp1;
    char ch;
    // open file in read mode
    fp = fopen("std.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file.");
    }
    // create temp file
    fp1 = fopen("temp.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error in creating temp file.");
    }
    /*read file from one file std.txt and copy into another temp.txt in uppercase*/
    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch-=32;
        }
        fputc(ch, fp1);
    }
    fclose(fp);
    fclose(fp1);
    // rename temp.txt file to std.txt
    // rename("temp.txt", "std.txt");
    // // remove temp file
    // remove("temp.txt");
    /*now, print content of the file*/
    fp = fopen("temp.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file.");
    }
    printf("Content of file temp.txt\n");
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
