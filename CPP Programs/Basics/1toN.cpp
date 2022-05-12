#include <iostream>
using namespace std;
void print(int n);

int main()
{
    int n;
    cin >> n;

    print(n);
}
void print(int n)
{
    if (n == 0)
        return;
    // write your code here
    print(n - 1);
    cout << n << " ";
}