#include<stdio.h>

void BubbleSort(int n[],int length);

void SelectionSort(int n[],int length);

void InsertionSort(int n[],int length);

void CyclicSort(int n[],int length);

void swap(int n[], int a, int b);

int main()
{
    int length;
    printf("Enter the number of elements: \n");
    scanf("%d",&length);
    int n[length];
    printf("Enter the numbers one by one : \n");
    for (int i=0;i<length;i++)
    {
        scanf("%d",&n[i]);
    }
    // Call the functions and sort as per requirement
    BubbleSort(n,length);
    printf("The Numbers In Ascending Order Is: \n");
    for (int i=0;i<length;i++)
    printf("%d ",n[i]); 
    printf("\nThe Numbers In Descending Order Is: \n");
    for (int i=length-1;i>=0;i--)
    printf("%d ",n[i]); 
}


void BubbleSort(int n[],int length)
{
    for (int i=0;i<=length-2;i++){
        for (int j=1;j<=length-i-1;j++){
            if (n[j]<n[j-1])
            swap(n,j,j-1);
        }
    }
}


void SelectionSort(int n[],int length)
{
    for (int i=0;i<=length-2;i++){
        int lastIndex=length-i-1;
        int max=n[0];
        int maxIndex=0;
        for (int i=0;i<=lastIndex;i++){
            if (n[i]>max){
                max=n[i];
                maxIndex=i;
            }
        }
        swap(n,maxIndex,lastIndex);
    }
}


void InsertionSort(int n[],int length)
{
    for (int i=0;i<=length-2;i++){
        for (int j=i+1;j>=1;j--){
            if (n[j]<n[j-1])
            swap(n,j,j-1);
            else 
            break;
        }
    }
}


void CyclicSort(int n[],int length)
{
    int i=0;
    while(i<=length-1)
    {
        int correctIndex=n[i]-1;
        if(n[i]!=n[correctIndex])
        swap(n,i,correctIndex);
        else
        i++;
    }
}


void swap(int n[], int a, int b)
{
    int temp=n[a];
    n[a]=n[b];
    n[b]=temp;
}