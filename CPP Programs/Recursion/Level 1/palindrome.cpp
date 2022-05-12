#include<iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char input[]) {
    // Write your code here
    static int start=0;
    int end=strlen(input);
    if(start>end)
        return 1;
    if(input[start]!=input[end-1-start])
    {
        return 0;
    }
    else
    {
        start++;
        checkPalindrome(input);
    }
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}