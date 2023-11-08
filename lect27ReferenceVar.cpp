// // // #include <iostream>
// // // using namespace std;

// // // void update(int n)
// // // {
// // //     n++;
// // // }

// // // int main()
// // // {
// // //     int n = 5;
// // //     cout << "Before update: " << n << endl;
// // //     update(n);
// // //     cout << "After update: " << n << endl;
// // // }

// // // static dynamic allocation

// // #include <iostream>
// // using namespace std;

// // int getsum(int *arr, int n)
// // {
// //     int sum = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         sum += *(arr + i);
// //     }
// //     return sum;
// // }

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     //variable size array

// //     int *arr = new int[n];

// //     //taking input in array
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }

// //     int ans = getsum(arr, n);
// //     cout<<"ans is" << ans << endl;

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int getsum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += *(arr + i);
//     }
//     return sum;
// }

// int main()
// {
//     // char ch = 'w';
//     // cout << sizeof(ch) << endl;

//     // char *c = &ch;
//     // cout << sizeof(c) << endl;

//     // cout << sizeof(ch) + sizeof(c) << endl;

//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int some = getsum(arr, n);
//     cout << some;
// }