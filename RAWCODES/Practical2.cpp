// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i, arr[50], search, first, last, middle;
// // //     cout << "Enter total number of elements :";
// // //     cin >> n;
// // //     cout << "Enter " << n << " number :";
// // //     for (i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //     }
// // //     cout << "Enter a number to find :";
// // //     cin >> search;
// // //     first = 0;
// // //     last = n - 1;
// // //     middle = (first + last) / 2;
// // //     while (first <= last)
// // //     {
// // //         if (arr[middle] < search)
// // //         {
// // //             first = middle + 1;
// // //         }
// // //         else if (arr[middle] == search)
// // // //         {
// // // //             cout << search << " found at location " << middle + 1 << "\n";
// // // //             break;
// // // //         }
// // // //         else
// // // //         {
// // // //             last = middle - 1;
// // // //         }
// // // //         middle = (first + last) / 2; ,
// // // //     }
// // // //     if (first > last)
// // // //     {
// // // //         cout << "Not found! " << search << " is not present in the list.";
// // // //     }
// // // //     return 0;
// // // // }

// // // // Binary search
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n, i, arr[50], search, first, last, middle;
// // //     cout << "Enter the number you want - ";
// // //     cin >> n;
// // //       first = 0;
// // //     last = n-1;
// // //     middle = (first + last) / 2;
// // //     cout << "Enter the numbers";

// // //     for (i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //     }
// // //     cout << "Enter number to find";
// // //     cin >> search;

// // //     while (first <= last)
// // //     {
// // //         if (arr[middle] < search)
// // //         {
// // //             first = middle + 1;
// // //         }

// // //         else if (arr[middle] == search)
// // //         {
// // //             cout << search << "Found at location" << middle + 1 << "\n";
// // //             break;
// // //         }

// // //         else
// // //         {
// // //             last = middle - 1;
// // //         }
// // //         middle = (first + last) / 2;
// // //     }

// // //     if (first > last)
// // //     {
// // //         cout << "not found" << search;
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // void swap(int &a, int &b)
// // {
// //     int temp = a;
// //     a = b;
// //     b = temp;
// // }

// // int partition(int arr[], int low, int high)
// // {
// //     int pivot = arr[high];
// //     int i = low - 1;

// //     for (int j = low; j < high; j++)
// //     {
// //         if (arr[i], arr[j])
// //         {
// //             i++;
// //             swap(arr[i], arr[j]);
// //         }
// //     }
// //     swap(arr[i+1] , arr[high]);
// //     return i + 1;
// // }

// // void quicksort(int arr[], int low , int high)
// // {
// //     if(low<high)
// //     {
// //         int pivot = partition(arr , low , high);
// //         quicksort(arr , low , pivot -1);
// //         quicksort(arr , pivot+1, high);
// //     }
// // }

// // void pointarray(int arr[], int size)
// // {
// //     for(int i =0 ; i<size ; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //         cout<<endl;
// //     }
// // }

// // int main()
// // {
// //     int arr[] = {4,1,7,8,2,15};
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     cout<<"Original array";
// //     pointarray(arr , n);
// //     quicksort(arr , 0 , n-1);
// //     cout<<"Sorted array : ";
// //     pointarray(arr , n);
// //     return 0 ;
// // }

// #include <iostream>
// using namespace std;

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivot = partition(arr, low, high);

//         quickSort(arr, low, pivot - 1);
//         quickSort(arr, pivot + 1, high);
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {9, 2, 5, 1, 7, 6, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, n);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }
