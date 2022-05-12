#include<iostream>
using namespace std;
 

int SOD(int n)
{
    if(n/10==0)
    return n;
    return n%10+SOD(n/10);
}
int POD(int n)
{
    if(n/10==0)
    return n;
    return n%10*POD(n/10);
}

int main()
{
    int n=1234;
    cout<<SOD(n)<<endl;
    cout<<POD(567);
}