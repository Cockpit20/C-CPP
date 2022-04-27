#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[15];
    char ch;
    printf("Enter the filename to be opened:");
    scanf("%s", filename);
    /*Open the file for reading*/
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file");
    }
    /*Read character by character from the file & display on computer screen*/
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
