#include <iostream>
using namespace std;

int NOD(int n)
{
    if (n / 10 == 0)
        return 1;
    return 1 + NOD(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << NOD(n);
}