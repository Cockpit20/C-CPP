#include<iostream>
using namespace std;


int multipy(int x,int n)
{
    if(x==0 || n==0)
    return 0;
    if(n==1)
    return x;
    return x+multipy(x,n-1);
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<x<<"x"<<n<<"="<<multipy(x,n);
}

