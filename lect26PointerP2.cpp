// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

// //     // for (int i = 0; i < 10; i++)
// //     // {
// //     //     cout << arr[i] << " - " << &arr[i] << endl;

// //     //     int *adress = &arr[i];

// //     //     cout << *adress << " - " << adress << endl;

// //     //     cout << endl;
// //     // }

// //     // array ka first block ka address uske nam se hi print kr sakte hai

// //     cout << "Adress of first block of array--  " << arr << endl;
// //     cout << "Adress of first block of array--  " << &arr << endl;
// //     cout << "Adress of first block of array--  " << &arr[0] << endl;

// //     // this line should give the value at first block with *
// //     cout << *arr << endl;
// //     cout << *arr + 1 << endl;
// //     cout << *(arr + 1) << endl;
// //     cout << *(arr) + 1 << endl;
// //     cout << (*arr) + 1 << endl;
// //     cout << *arr + 2 << endl;

// //     // loop to traverse arry with *arr will print values of array
// //     // for (int i = 0; i < 10; i++)
// //     // {
// //     //     cout << " " << *arr + i << endl;
// //     // }
// //     cout << "new - -  " << endl;
// //     int i = 3;
// //     cout << i[arr] << endl;

// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int temp[10];
// //     cout<<sizeof(temp)<<endl;
// //     cout<<"1st value ka size - " << sizeof(*temp)<<endl;

// //     int *ptr = &temp[0];
// //     cout<<sizeof(ptr)<<endl;
// //     cout<<sizeof(*ptr)<<endl;
// // }

// // #include <iostream>

// // int main() {
// //     int* ptr;
// //     int ptr1;
// //     std::cout << "Size of pointer: " << sizeof(ptr) << " bytes" << std::endl;
// //     std::cout << "Size of int varable: " << sizeof(ptr1) << " bytes" << std::endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //   /* int num = 10;

// //   int *point = &num;
// //   cout << "The value of num is " << num << endl;

// //   cout << " The address of num is and can be defined by &num = " << &num<<endl;

// //   cout<<"The address of num is also defined by - point = " << point<<endl;

// //   cout<<"The value can be also shown by only num and only by *point = "<<*point << endl;
// // */

// //   int num ;
// //   cout<<sizeof(num)<<endl;

// //   int *point = &num;
// //   cout<<sizeof(*point)<<endl;

// //   cout<<sizeof(point)<<endl;

// //   return 0 ;
// // }

// // #include <iostream>

// // int main() {
// //     int anIntVariable;
// //     int* aPointerVariable;

// //     std::cout << "Size of int variable: " << sizeof(anIntVariable) << " bytes" << std::endl;
// //     std::cout << "Size of pointer variable: " << sizeof(aPointerVariable) << " bytes" << std::endl;

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// void print(int *p)
// {
//   cout << p << endl;
// }
// void update(int *p)
// {
//   p = p + 1;
//   // cout<<<<en
//   cout<<p<<endl;

// }

// int main()
// {
//   int n;
//   cin >> n;

//   int *ug = &n;

//   // print
//   print(ug);

//   update(ug);
//   print(ug);
// }
// int main()
// {
//   int n;
//   cin >> n;

//   int *ug = &n;

//   // print
//   print(ug);

//   update(ug);
//   print(ug);
// }