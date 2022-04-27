#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char str[50]="Wait for the misery!";

    // ptr=fopen("file.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("The content of this file has %s\n",str);

    // ptr=fopen("file.txt","w");
    // fprintf(ptr,"%s",str);

    ptr=fopen("file.txt","a");
    fprintf(ptr,"%s",str);

}