#include<iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n; j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
}
