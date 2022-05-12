#include<iostream>
using namespace std;

int product(int n)
{
    if(n==1)
    return 1;
    return n*product(n-1);
}
int sum(int n)
{
    if(n==1)
    return 1;
    return n+sum(n-1);
}
int main()
{
    cout<<product(5)<<endl;
    cout<<sum(5);
}