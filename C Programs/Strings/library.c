#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);
    char str3[50];

    // puts(strcat(str1,str2));

    // printf("%d\n",strlen(str1));
    // printf("%d\n",strlen(str2));

    // puts(strrev(str1));
    // puts(strrev(str2));

    // strcpy(str3,strcat(str1,str2));
    // puts(str3);
    if (strcmp(str1, str2) == 0)
        printf("Both strings are same\n");
    else
        printf("Strings are not same\n");

    char str4[]=" is friend of ";
    puts(strcat(str1,strcat(str4,str2)));
}