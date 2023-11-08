#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

//     int start = 0;
//     int end = n-1;

//     int num[n];
//     for (int  i = 0; i < n; i++)
//     {

//         cin>>num[i];
//     }

//     while (start<=end)
//     {
//         swap(num[start] , num[end]);
//         start++;
//         end--;
//     }
//     for (int  i = 0; i < n; i++)
//     {

//         cout<<num[i]<<" ";
//     }

// }

// Swap alternate element

// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

//     int start = 0;
//     int end = n-1;

//     int num[n];
//     for (int  i = 0; i < n; i++)
//     {

//         cin>>num[i];
//     }

//     while (start<=end)
//     {
//         if(start<n){
//         swap(num[start] , num[start+1]);
//         }
//         start = start+2;
//         // end--;
//     }
//     for (int  i = 0; i < n; i++)
//     {

//         cout<<num[i]<<" ";
//     }

// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

//     int start = 0;
//     int end = n-1;

//     int num[n];
//     for (int  i = 0; i < n; i++)
//     {

//         cin>>num[i];
//     }

//  for (int i = 0; i < n; i = i+2)
//  {
//     if(start<n)
//     {
//         swap(num[start], num[start+1]);
//     }
//  }

//     for (int  i = 0; i < n; i++)
//     {

//         cout<<num[i]<<" ";
//     }

// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

//     int start = 0;
//     int end = n-1;
//     int temp;

//     int num[n];
//     for (int  i = 0; i < n; i++)
//     {

//         cin>>num[i];
//     }

//  for (int i = 0; i < n; i = i+2)
//  {
//     if(start<n)
//     {
//         temp = num[start];
//         num[start] = num[start+1];
//         num[start+1]= temp;
//     }
//  }

//     for (int  i = 0; i < n; i++)
//     {

//         cout<<num[i]<<" ";
//     }

// }

// int main()
// {

//     int n;
//     cin >> n;
//     int ans = 0;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ array[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans ^ i;
//     }

//     cout << ans;
// }

// int main()
// {

//     int array[5] = {1, 2, 3, 4, 5};
//     int target = 11;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (array[i] + array[j] == target)
//             {
//                 for (int k = j + 1; k < 5; k++)
//                 {
//                     /* code */
//                     // target = target - array[k];
//                     if (array[i] + array[j] + array[k] == target)
//                     {
//                         cout << array[i] << " " << array[j] << " " << array[k] << endl;
//                     }
//                 }
//             }
//         }
//     }

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     int target = 11;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             for (int k = j + 1; k < 5; k++)
//             {
//                 if (array[i] + array[j] + array[k] == target)
//                 {
//                     cout << array[i] << " " << array[j] << " " << array[k] << endl;
//                 }
//             }
//         }
//     }

//     return 0;
// }

// void sortedarray(int num[], int n)
// {

//     int left = 0;
//     int right = n - 1;

//     while (left < right)

//     {
//         while (num[left] == 0 && left < right)
//         {
//             left++;
//         }

//         while (num[right] == 1 && left < right)
//         {
//             right--;
//         }

//         if (left < right)
//         {
//             swap(num[left], num[right]);
//             left++;
//             right--;
//         }
//     }
// }

// void inputarray(int num[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         cin >> num[i];
//     }
// }

// void printaray(int num[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         cout << num[i] << " ";
//     }
// }
// int main()
// {

//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     int num[n];
//     inputarray(num, n);
//     sortedarray(num, n);
//     printaray(num, n);
// // }

// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 count++;
//             }
//         }
//     }

//     cout << count;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int* array = new int[n];  // Dynamically allocate memory

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 count++;
//             }
//         }
//     }

//     cout << count;

//     delete[] array;  // Deallocate memory

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int* array = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         bool isCounted = false;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] == array[j] && !isCounted)
//             {
//                 count++;
//                 isCounted = true;
//             }
//         }
//     }

//     cout << count;

//     delete[] array;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         int count = 0;

//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i <= n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[i] == a[j])
//                 {

//                     count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }

