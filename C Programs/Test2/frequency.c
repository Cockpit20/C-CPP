#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    char ch;
    scanf(" %c", &ch);
    int i = 0, c = 0;
    while (str[i] != '\0')
    {
        if (ch == str[i])
            c++;
        i++;
    }
    printf("%d", c);
}