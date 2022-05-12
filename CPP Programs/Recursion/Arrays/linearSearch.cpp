#include<iostream>
using namespace std;


int linearSearch(int arr[],int target)
{

    for (int i = 0; i < 5; i++)
    {
        if(target==arr[i])
        return i;
    }
    return -1;
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int target=2;
    int index=linearSearch(arr,target);
    if(index==-1)
    cout<<target<<" not found";
    else
    cout<<target<<" found at index "<<index;
}