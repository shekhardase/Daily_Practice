// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// // void inputarray(int arr[], int size)
// // {
// //     cout << "Enter the size of the array: ";
// //     cin >> size;
// //     cout << "Enter the elements of the array: ";
// //     for (int i = 0; i < size; i++)
// //     {
// //         cin >> arr[i];
// //     }
// // }

// // void printarray(int arr[], int size)
// // {
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// int FindFirst(int arr[], int key, int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//     }

//     return ans;
// }

// int FindLast(int arr[], int key, int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int key = 2;

//     cout << FindFirst(arr, key, size) << endl;
//     cout << FindLast(arr, key, size) << endl;

//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void inputarray(int arr[], int size)
// {
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }

// void printarray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int FindFirst(int arr[], int key, int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//     }

//     return ans;
// }

// int FindLast(int arr[], int key, int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int key = 2;

//     cout << FindFirst(arr, key, size) << endl;
//     cout << FindLast(arr, key, size) << endl;

//     cout<<"TOTAL number of occurances of element is ";
//     // cout<<FindFirst(arr, key, size)-FindLast(arr, key, size)+1<<endl;
//     cout<<FindLast(arr, key, size)-FindFirst(arr, key, size)+1<<endl;

//     return 0;
// }



// int pivot(int arr[] , int n)
// {
//     int s = 0;
//     int e = (n-1);
//     int mid  = s + (e-s) / 2;


//     while(s<e)
//     {
//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }

//         else{
//             e = mid;
//         }
//         mid = s + (e-s) / 2;
//     }
// return s ;
// }

// int main()
// {
//     int arr[5] = {3 , 8 ,10 ,17, 1};
//     cout<<"Pivot Index is "<<pivot(arr , 5)<<endl;
//     return 0;
// }

// int main()
// {
//     cout<< 200 % 10 <<endl;
//     // cout<< 8 / 10 ;
// }
