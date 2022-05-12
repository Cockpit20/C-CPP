#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{
    if (n == 0)
        return false;
    if (arr[n - 1] == target)
        return true;
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
    if (linearSearch(arr, n, target))
        cout << "true";
    else
        cout << "false";
}