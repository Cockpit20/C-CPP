#include<iostream>
using namespace std;

int countZeros(int n)
{
    if(n/10==0){
        if(n%10==0)
            return 1;
        else
            return 0;
    }
        
    if(n%10==0)
    return 1+countZeros(n/10);
    else
    return countZeros(n/10);
}

int main()
{
    cout<<countZeros(0);
}