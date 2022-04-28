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
    int noc=0,nol=0,nob=0,not=0;
    /*Read character by character from the file & display on computer screen*/
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
        noc++;
        if(ch=='\n')
        nol++;
        if(ch==' ')
        nob++;
        if(ch=='\t')
        not++;
    }
    printf("\nNo.of characters in the file is %d\n",noc);
    printf("No.of lines in the file is %d\n",nol);
    printf("No.of blankspaces in the file is %d\n",nob);
    printf("No.of tabs in the file is %d\n",not);
    fclose(fp);
}
