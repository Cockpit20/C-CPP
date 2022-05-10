#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    int c=a+b;
    cout<<"Sum = ";
    cout<<c<<endl;

    char ch='x';
    cout<<ch<<endl;

    float f=1.23;
    cout<<f<<endl;

    double d=3.45;
    cout<<d<<endl;

    bool value=true;
    cout<<value<<endl;

    int size_of_float=sizeof(f);
    cout<<size_of_float<<endl;
}