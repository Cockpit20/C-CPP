#include<stdio.h>

int main()
{
    char str[100],word[10];
    printf("Enter a string:");
    gets(str);
    printf("Enter a word:");
    gets(word);

    int strlen=0;
    while(str[strlen]!='\0')
    strlen++;
    int wrdlen=0;
    while(word[wrdlen]!='\0')
    wrdlen++;

    int index=-1;
    for (int i = 0; i <= strlen-wrdlen; i++)
    {
        for (int j = i; j < wrdlen+i; j++)
        {
            index=i;
            if(str[j]!=word[j-i])
            {
                index=-1;
                break;
            }
        }
        if(index!=-1)
        break;
        
    }

    printf("%d",index);
    

}