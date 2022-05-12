#include<iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void trianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void numberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}

void reverseNumberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
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
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)(65+i-1);
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
    trianglePattern(n);
    numberPattern(n);
    reverseNumberPattern(n);
    alphaPattern(n);
}
