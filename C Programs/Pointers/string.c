#include <stdio.h>
void printString(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
    {
        printf("%c", *(s + i));
        i++;
    }
}
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    printString(s);
}
