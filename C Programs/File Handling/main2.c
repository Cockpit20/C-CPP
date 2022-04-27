#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","a+");

    // char c=fgetc(fp);
    // printf("The character is %c",c);

    // char str[4];
    // fgets(str,10,fp);
    // printf("The string is %s",str);

    fputc('o',fp);
    fputs("This is warrior",fp);

    fclose(fp);


}