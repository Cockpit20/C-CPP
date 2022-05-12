#include<iostream>
using namespace std;
#include<cmath>

float geometricSum(int n)
{
    if(n==0)
        return 1;
    return 1/pow(2,n)+geometricSum(n-1);
}


int main()
{
    cout<<geometricSum(10);
}