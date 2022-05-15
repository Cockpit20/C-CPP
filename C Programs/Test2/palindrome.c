#include <stdio.h>
#include <string.h>
int palindrome(char str[]);
int main()
{
    char str[100];
    gets(str);

    if (palindrome(str))
        printf("%s is palindrome", str);
    else
        printf("%s is not palindrome", str);
}
int palindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start <= end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}