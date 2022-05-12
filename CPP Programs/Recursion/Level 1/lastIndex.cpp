#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    if (n == 0)
        return -1;
    if (arr[n - 1] == target)
        return n-1;
    else
        return linearSearch(arr, n - 1, target);
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
    int target;
    cin >> target;
    cout<<linearSearch(arr, n, target);
    
}