#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0;
    char dst[100];
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0'){
        dst[i] =str[i];
        i++;
    }
        
    printf("New String is %s",dst);
}