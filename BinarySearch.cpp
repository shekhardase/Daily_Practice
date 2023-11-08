#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     // int mid = (start + end) / 2;
//     int mid = start + (end - start) / 2;
//     // int key;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         // go to right part
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }

//         // go left
//         else
//         {
//             end = mid - 1;
//         }

//         // mid = (start + end) / 2;
//         mid = start + (end - start) / 2;
//     }
//     cout<<"KEY NOT FOUND "<<endl;
//     return -1;
// }

// int main()
// {

//     int even[5] = {2, 4, 6, 8, 10};
//     int odd[5] = {1, 3, 5, 7, 9};

//     int indexEven = binarysearch(even, 5, 4);
//     int indexOdd = binarysearch(odd, 5, 3);
//     cout << indexEven << endl;
//     cout << indexOdd << endl;
// }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int size;
// //     int array[5] = {1, 2, 3, 4, 5};
// //     int key = 4;

// //     int start = 0;
// //     int end = 5 - 1;

// //     int mid = (start + end) / 2;

// //     while (start <= end)
// //     {
// //         if (array[mid] == key)
// //         {
// //             return mid;
// //         }

// //         if (array[mid] < key)
// //         {
// //             start = mid + 1;
// //         }

// //         else
// //         {
// //             end = mid - 1;
// //         }

// //         mid = (start + end) / 2;

// //         // return -1;
// //     }
// //     return -1;
// // }

#include <iostream>
using namespace std;

int main()
{
    int size;
    int array[5] = {1, 2, 3, 4, 5};
    int key = 4;

    int start = 0;
    int end = 5 - 1;

    int mid = (start + end) / 2;
    int result = -1;

    while (start <= end)
    {
        if (array[mid] == key)
        {
            result = mid;
            break;
        }

        if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    // return -1;

    cout << "Index of the key " << key << ": " << result << endl;

    return 0;
}

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;

//         cin >> n;
//         int array[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> array[i];

//         }

//             sort(array, array + n);

//         int count = n;
//         for (int i = 1; i < n; i++)
//         {
//             if (array[i] == array[i - 1])
//             {
//                 count--;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int n;

//     cin >> n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//         // cin >> array[i];
//     }

//     sort(array, array + n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
