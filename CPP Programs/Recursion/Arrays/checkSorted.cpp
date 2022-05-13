#include<iostream>
using namespace std;

bool checkSorted(int arr[],int size)
{
    if(size==1)
        return true;
    if(arr[0]<arr[1])
    return checkSorted(arr+1,size-1);
    else 
    return false;
}


int main()
{
    int arr[]={8,9,12,28,32};
    int size=5;
    if(checkSorted(arr,size))
    cout<<"true";
    else
    cout<<"false";
}