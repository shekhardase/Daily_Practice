#include <iostream>
using namespace std;

// check if array is sorted using recursion
//  bool IsSorted(int *arr, int size)
//  {
//      // base case
//      if (size == 0 || size == 1)
//      {
//          return true;
//      }

//     if (arr[0] > arr[1])
//     {
//         return false;
//     }

//     else
//     {
//         bool remainingPart = IsSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int main()
// {
//     int arr[5] = {2, 3, 4, 5, 6};
//     int size = 5;

//     bool ans = IsSorted(arr, size);

//     if (ans)
//     {
//         cout << "The array is sorted";
//     }
// }

// find the sum of all elements of array
// using recursion

// int sum(int *arr, int size)
// {
//     // base case
//     if (size == 0)
//     {
//         return 0;
//     }

//     if (size == 1)
//     {
//         return arr[0];
//     }

//     else
//     {
//         // int store = 0;
//         return arr[0] + sum(arr + 1, size - 1);
//     }
// }
// int main()
// {
//     int arr[5] = {3, 2, 5, 1, 6};
//     int size = 5;

//     int result = sum(arr, size);

//     cout << "The sum of elemnt of array is = " << result;
// }

// linear search using recursion

bool LinearSearch(int arr[], int size, int k)
{

    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = LinearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 2;

    bool ans = LinearSearch(arr, size, key);

    if (ans)
    {
        cout << "present " << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}