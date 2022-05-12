#include<iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= 2*i-1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}

void alphaPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= 2*i-1; j++)
        {
            cout<<(char)(65+j-1);
        }
        cout<<endl;
    }
    
}

void interestingAlphabets(int n)
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout<<(char)(65+j-1);
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
    alphaPattern(n);
    interestingAlphabets(n);
}
