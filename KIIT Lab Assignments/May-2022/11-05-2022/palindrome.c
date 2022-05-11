#include <stdio.h>
#include <string.h>
int checkPalindrome(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int ans = checkPalindrome(str);
    if (ans == 1)
        printf("%s is palindrome.", str);
    else
        printf("%s is not palindrome.",str);
}
int checkPalindrome(char str[])
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
        return 0;
    }
    return 1;
}