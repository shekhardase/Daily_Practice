// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int x, y, z;
// // //     y = 1;
// // //     x = 2;
// // //     z = x ^ y;
// // //     cout << z << endl;
// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n = 1;
// // //     int newn = n << 1;
// // //     int newn2 = n << 2;
// // //     int newn3 = n << 3;

// // //     int nc = 1;
// // //     int newnc = n >> 1;
// // //     int newn2c = n >> 2;
// // //     int newn3c = n >> 3;
// // //     cout << nc << endl;
// // //     cout << newnc << endl;
// // //     cout << newn2c << endl;
// // //     cout << newn3c << endl;

// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n = 1;

// //     int first = n << 1;
// //     int second = n << 2;
// //     int third = n << 3;
// //     int fourth = n << 4;

// //     // cout << first << endl;
// //     // cout << second << endl;
// //     // cout << third << endl;
// //     // cout << fourth << endl;

// //     int first1 = n << 1;
// //     int second1 = first1 << 1;
// //     int third1 = second1 << 1;
// //     int fourth1 = third1 << 1;

// //     cout << first1 << endl;
// //     cout << second1 << endl;
// //     cout << third1 << endl;
// //     cout << fourth1 << endl;
// // cout<<"_____________";
// //     cout <<( 3 << 1) << endl;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     char m = 'a';
// //     int count = 0;

// //     while(m>'a')
// //     {
// //         count++;
// //         m--;
// //     }

// //     cout<<count;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int x = 11, y = 4, z = 3;
// //     y = !x;
// //     z = !!x;
// //     cout<<y<<" "<<z;
// // }

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int p = 1 , q = 2;

// //     for(int i = 0 ;  i <= 6 ; i =i +2)
// //     {
// //         p = p + q + i ;
// //         p = p + q;
// //         q = p -q ;
// //         cout<<q << " ";
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int c = 5, no = 1000;
//     // do
//     // {
//     //     no /= c;
//     // } while (c--);
//     // // printf("%d\n", no);
//     // cout << no << endl;
//     // return 0;

//     int a = 24 ,  b = 8;
//     cout<<b<<a<<endl;
//     int b = 8;  // 1000 in binary
//     int a = 24; // Decimal value 24
//     int result = b << a;

//     cout << "b << a = " << result << endl; // Should output 134217728
// }