#include <stdio.h>
void printStr(char str[]);
int main()
{
    // char str[] = {'C', 'h', 'a', 'n', 'd', 'r', 'a', '\0'};
    // char str[] = "Chandra";
    char str[50];
    gets(str); 
    printf("Using function:\n");
    printStr(str);
    printf("\nUsing printf:\n%s\n",str);
    printf("Using puts:\n");
    puts(str);
}
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}