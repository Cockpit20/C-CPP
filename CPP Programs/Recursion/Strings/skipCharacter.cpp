#include <iostream>
using namespace std;

void skip(char str[])
{
    if (str[0] == '\0')
        return;
    char ch = str[0];
    if (ch == 'x'){
        int i=1;
        for (; str[i] != '\0'; i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        skip(str);
    }
        
    else
    {
        skip(str + 1);
    }
}

int main()
{
    char str[] = "xxaxbxxcxdxx";
    skip(str);
    cout<<str;
}