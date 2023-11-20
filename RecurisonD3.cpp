// Lecture focuses on question solving
//  Q1 . Reverse the string using recursion
// #include <iostream>
// using namespace std;

// void reverse(string str, int end)
// {
//     // end = str.size() - 1;

//     if (end < 0)
//     {
//         return;
//     }
//     cout << str[end] << " ";

//     reverse(str, end - 1);
// }

// int main()
// {
//     string str;
//     cin >> str;

//     reverse(str, str.size() - 1);
// }

// reverse string using recursion but with swap function

// #include <iostream>
// using namespace std;

// void reverse(string &str, int start, int end)
// {
//     // Base case: when the start index crosses the end index
//     if (start >= end)
//     {
//         return;
//     }

//     // Swap the characters at the start and end indices
//     swap(str[start], str[end]);

//     // updation
//     start = start + 1;
//     end = end - 1;

//     // Recur for the remaining substring
//     reverse(str, start, end);
// }

// int main()
// {
//     string str;
//     cin >> str;

//     // Call the reverse function with appropriate parameters
//     reverse(str, 0, str.size() - 1);

//     // Output the reversed string
//     cout << "Reversed String: " << str << endl;

//     return 0;
// }

// String palindrone

// #include <bits/stdc++.h>
// using namespace std;

// bool StringCheck(string str, int start, int end)
// {
//     // base case
//     if (start > end)
//     {
//         return true;
//     }

//     // procedure  / updation
//     if (str[start] != str[end])
//     {
//         return false;
//     }

//     // Recursive call
//     else
//     {
//         StringCheck(str, start + 1, end - 1);
//     }
// }

// int main()
// {
//     string str;
//     cin >> str;
//     cout << endl;

//     bool haiky = StringCheck(str, 0, str.length() - 1);

//     if (haiky)
//     {
//         cout << "It is palindrone";
//     }
//     else
//     {
//         cout << "nahi hai";
//     }

//     return 0;
// }

// create power function using recursion
// if m and n is given output = m ^ n;

// #include <iostream>
// using namespace std;

// int Power(int a, int b)
// {
//     // base case
//     if (b == 0)
//     {
//         return 1;
//     }

//     if (b == 1)
//     {
//         return a;
//     }

//     // Recursive call
//     int ans = Power(a, b / 2);

//     // if b is even
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }

//     // if b is odd
//     else
//     {
//         return a * ans * ans;
//     }
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = Power(a, b);

//     cout << "answer is " << ans << endl;
// }

// // normal bubble sort code

// #include <iostream>
// using namespace std;

// //swap
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// //sorting number
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = 0; j < n - i - 1; ++j)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// //printing array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array: \n";
//     printArray(arr, n);

//     return 0;
// }

// bubble sort using recursion

// #include <bits/stdc++.h>
// using namespace std;

// void sort(int *arr, int n)
// {
//     // base case
//     if (n == 0 || n == 1)
//     {
//         return;
//     }

//     // for 1 case largest element ko end mai rakh denge
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }

//     // recursive call
//     sort(arr, n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, n);

//     cout << "The sorted array is now -" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }