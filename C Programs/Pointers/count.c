#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    int cv = 0, cc = 0;
    int i = 0;
    while (*(s + i) != '\0')
    {
        if ((*(s + i) >= 65 && *(s + i) <= 90) || (*(s + i) >= 97 && *(s + i) <= 122))
        {
            if (*(s + i) == 'a' || *(s + i) == 'e' || *(s + i) == 'i' || *(s + i) == 'o' || *(s + i) == 'u' || *(s + i) == 'A' || *(s + i) == 'E' || *(s + i) == 'I' || *(s + i) == 'O' || *(s + i) == 'U')
                cv = cv + 1;
            else
                cc = cc + 1;
        }

        i++;
    }
    printf("Number of vowels= %d \n", cv);
    printf("Number of consonants= %d", cc);
}
