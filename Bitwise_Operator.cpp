// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int a = 4;
// // // // //     int b = 5;

// // // // //     cout << "a&b = " << (a & b) << endl;
// // // // //     cout << "a|b = " << (a | b) << endl;
// // // // //     cout << "~a = " << (~a) << endl;
// // // // //     cout << "a^b = " << (a ^ b) << endl;

// // // // //     int i = 3;

// // // // //     cout << (i++) << endl;
// // // // //     cout << endl;
// // // // //     // i = 3 then i = 4

// // // // //     cout << (++i) << endl;
// // // // //     // i = 5 then i = 5;
// // // // //     cout << endl;
// // // // //     cout << (i--) << endl;
// // // // //     // i = 5 then i = 4;
// // // // //     cout << endl;
// // // // //     cout << (--i) << endl;
// // // // //     // i = 3 then i = 3;
// // // // //     cout << endl;

// // // // //     return 0;
// // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int a , b=1;
// // // // //     a = 10;
// // // // //     if (++a)
// // // // //     {
// // // // //         cout<<b;
// // // // //     }
// // // // //     else
// // // // //     cout<<++b;

// // // // // }

// // // // #include <iostream>
// // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     int a = 1;
// // // // //     int b = 2;
// // // // //     if(a-- > 0 && ++b>2)
// // // // //     {
// // // // //         cout<<"Stage 1 - Inside If ";
// // // // //     }

// // // // //     else
// // // // //     {
// // // // //         cout<<"Stage 2 - Inside else";
// // // // //     }
// // // // //     cout<<endl;

// // // // //     cout<<a <<" "<<b<<endl;
// // // // // }

// // // // int main()
// // // // {
// // // //     int a = 1;
// // // //     int b = 2;
// // // //     if (a-- > 0 || ++b > 2)
// // // //     {
// // // //         cout << "Stage 1 - Inside If ";
// // // //     }

// // // //     else
// // // //     {
// // // //         cout << "Stage 2 - Inside else";
// // // //     }
// // // //     cout << endl;

// // // //     cout << a << " " << b << endl;

// // // //     int number = 3;
// // // //     cout<<(25 * (++number));
// // // // // }

// // // // #include <iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int a= 1;
// // // //     int b = a++;
// // // //     int c = ++a;
// // // //     cout<<b;
// // // //     cout<<endl;
// // // //     cout <<c;
// // // /*
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n ;
// // //     cout<<"Enter the value of n = " <<endl;
// // //     cin>>n;

// // //     int sum =  0;

// // //     for(int i = 0 ; i<=n ; i++)
// // //     {
// // //         sum = sum+i;

// // //     }
// // //     cout<<sum;
// // // } */
// // // /*

// // // fibonachi series
// // // 0  1 1 2 3 5 8 13 21

// // // */

// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int n;
// // //     cout << "Enter the number - ";
// // //     cin >> n;
// // //     int a = 0;
// // //     int b = 1;
// // //     cout<<a <<endl;
// // //     cout<<b <<endl;

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         int nextnumber = a + b;
// // //         cout << nextnumber << endl;

// // //         a = b;
// // //         b = nextnumber;

// // //     }
// // // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     //  ]c]
// //     cout << "Enter number " << endl;
// //     cin >> n;

// //     bool isprime = 1;

// //     for (int i = 2; i < n; i++)
// //     {
// //         if (n % i == 0)
// //         {
// //             // cout << "Not a prime number " << endl;
// //             isprime = 0;
// //             break;
// //         }
// //         /* else{



// //         } */
// //     }
// //     if (isprime == 0)
// //     {
// //         cout << "Not a prime number";
// //     }
// //     else
// //     {
// //         cout << "prime";
// //     }
// // }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<"Enter the number - " <<endl;
//     cin>>n;

//     for (int i = 2; i < n; i++)
//     {
//         if(n%i == 0 )
//         {
//             cout<< " Not a prime number "<<endl;
//             break;

//         }

//         else{
//             cout<<"Is a prime number _";
//             break;
//         }
//     }
// }

#include<iostream>
using namespace std;
// int main()
// {
//     for(int i = 0 ; i<5 ; i++)
//     {
//         cout<<"Hi"<<endl;
//         cout<<"hey "<<endl;
//         continue;
//         cout<<"GImme reply";  

//     }
// }

int main()
{
    // for(int i = 0 ; i<=5 ; i--)
    // {
    //     i++;
    //     cout<<i<<" ";
    // }


//     for (int i = 0; i <= 15; i+=2)
//     {
//         /* code */
//         cout<<i<<" ";

//         if(i&1)
//         {
//             continue;

//         }
//         i++;
        
//     }
    
// // }

// for(int i = 0 ; i<5; i++)
// {
//     for(int j = i ; j<=5 ; j++)
//     {
//         cout<<i<<" "<< j <<endl;
//     }
// }
// }

// for(int i = 0; i< 5 ; i ++)
// {
//     for(int j = i  ; j<=5 ; j++)
//     {
//         if(i+j == 10)
//         {
//             break;
//         }
//         cout<<i<< " " <<j<<endl;
//     }
// }

int a = 3 ;
cout<<a<<endl;
if (true)
{
    cout<<a<<endl;
}















}














