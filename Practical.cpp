// // this is recursion

// #include<iostream>
// using namespace std;
// int factorial(int n );
// // int main()
// // {
// //     int n ;
// //     cin>>n;
// //     cout<<"Factorial is - "<<factorial(n);

// //     return 0 ;

// // }

// // int factorial(int n)
// // {
// //     if(n>1)
// //     {
// //         return n * factorial (n-1);
// //     }
// //     else
// //     {
// //         return 1;
// //     }
// // }

// // This is iteration

// #include <iostream>
// using namespace std;
// int factorial(int n);

// int main()
// {
//     int n;
//     cin >> n;
//     cout << "Factorial is " << factorial(n);
// }

// int factorial(int n)
// {
//     int result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         result = result * i;
//     }
//     return result;
// }

// // recursion

// // #include <iostream>
// // using namespace std;
// // int factorial(int n);
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     cout<<"Factorial is - "<<factorial(n);

// // }

// // int factorial(int n)
// // {
// //     if(n>1)
// //     {
// //         return n*factorial(n-1);
// //     }
// //     else
// //     {
// //     return 1;
// //     }
// // }

// // iteration

// // int factorial(int n);
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     cout << "The factorial is " << factorial(n);
// // }

// // int factorial(int n)
// // {
// //     int result = 1;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         result = result * i;
// //     }
// //     return result;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, arr[50], search, first, last, middle;
//     first = 0;
//     last = n - 1;
//     middle = (first + last) / 2;
//     cout << "Enter the number you want - ";
//     cin >> n;
//     cout << "Enter the number ";

//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter a number to find ";
//     cin >> search;

//     while (first <= last)
//     {
//         if (arr[middle] < search)
//         {
//             first = middle + 1;
//         }
//         else if (arr[middle] == search)
//         {
//             cout << search << "Found at location " << middle + 1 << "\n";
//             break;
//         }
//         else
//         {
//             last = middle - 1;
//         }
//         middle = (first + last) / 2;
//     }
//     if (first > last)
//     {
//         cout << "Not found " << search;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, arr[50], search, first, middle, last;

//     cout << "Enter the number you want ";
//     cin >> n;

//     cout << "Enter the numbers ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter the value you want to search";
//     cin >> search;
//     first = 0;
//     last = n - 1;
//     middle = (first + last) / 2;

//     while (first <= last)
//     {
//         if (arr[middle] < search)
//         {
//             first = middle + 1;
//         }
//         else if (arr[middle] == search)
//         {
//             cout << search << "found at location " << middle + 1;
//             break;
//         }
//         else
//         {
//             last = middle + 1;
//         }
//         middle = (first + last) / 2;
//     }

//     if (first > last)
//     {
//         cout << "Not found" << search;
//         return 0;
//     }
// }
