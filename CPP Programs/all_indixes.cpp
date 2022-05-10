#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]);
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
int allIndexes(int input[], int size, int x, int output[]) 
{
    int index = size-1;
    if(index==0){
        if(input[index] == x){
            output[0] = 0; 
            return 1;
        }
        else return -1;
    }
    else {
        int space = allIndexes(input, index, x, output);
        if(space != -1){
            if(input[index] == x){
                output[space] = index; 
                return space + 1;
            }
            else return space;
          }
       else  if(space == -1){
            if(input[index] == x){
                output[0] = index; 
                return 1;
            }
        else return -1;
        }
    }
}