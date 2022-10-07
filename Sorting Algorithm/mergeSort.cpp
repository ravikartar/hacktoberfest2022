#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int firstHalf = mid - lb + 1;
    int secondHalf = ub - mid;

    int L[firstHalf], M[secondHalf];

    for (int i = 0; i < firstHalf; i++)
        L[i] = arr[lb + i];
    for (int j = 0; j < secondHalf; j++)
        M[j] = arr[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = lb;

    while (i < firstHalf && j < secondHalf)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while(i< firstHalf)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j< secondHalf)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void sort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        sort(arr, lb, mid);
        sort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int a[] = {3, 1, 5, 4, 6};
    int size = sizeof(a) / sizeof(a[0]);
    sort(a, 0, size - 1);
    printArray(a, size);
}