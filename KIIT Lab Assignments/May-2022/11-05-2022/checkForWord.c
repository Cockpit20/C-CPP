#include<stdio.h>
 
int main()
{
    char str[80], word[10];
    int str_len = 0, wrd_len = 0;
    int index=-1;
 
    printf("Enter a string: ");
    gets(str);
    printf("Enter word to be serached: ");
    gets(word);
    while (str[str_len] != '\0')
        str_len++;
    while (word[wrd_len] != '\0')
        wrd_len++;
    for (int i = 0; i <= str_len - wrd_len; i++)
    {
        for (int j = i; j < i + wrd_len; j++)
        {
            index=i;
            if (str[j] != word[j - i])
            {
                index = -1;
                break;
            }
        }
        if (index != -1)
            break;
    }
    if (index != -1)
        printf("Word found at index %d",index);
    else
        printf("Word not found!");
}