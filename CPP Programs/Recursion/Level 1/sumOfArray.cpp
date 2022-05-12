#include <iostream>
using namespace std;

int SOA(int arr[], int n)
{
    if (n == 1)
        return arr[n - 1];
    return arr[n - 1] + SOA(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << SOA(arr, n);
}