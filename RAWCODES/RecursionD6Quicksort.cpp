#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int partation(int arr[], int start, int end)
{
    int pivot = arr[start];

    int countLessElement = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            countLessElement++;
        }
    }

    int pivotIndex = start + countLessElement;
    // swap(arr[pivotIndex , arr[start]);
    swap(arr[pivotIndex], arr[start]);

    // left and right part handeler

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // partitioning

    int p = partation(arr, start, end);

    // left part sort
    quickSort(arr, start, p - 1);

    // right part sort
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[5] = {3, 2, 4, 5, 1};
    int size = 5;

    // quickSort(arr , start , end0)
    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}