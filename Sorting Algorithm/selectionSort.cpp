#include<iostream>
using namespace std;

void sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        int min_index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[min_index]>arr[j])
            min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int a[] = {5, 2, 1, 6, 3};
    int size = sizeof(a)/ sizeof(a[0]);
    sort(a, size);
    printArray(a, size);
}