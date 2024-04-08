// // #include <iostream>
// // using namespace std;

// // void fun(int n)
// // {
// //     if (n > 0)
// //     {
// //         cout << n << " ";
// //         fun(n - 1);
// //     }
// // }

// // int main()
// // {
// //     int x = 3;
// //     fun(x);
// //     return 0;
// // }

// // //day 1 of actual recursion with love babbar dsa series

// // Recursion need 3 componends 1 is base case where return 1 is mandentory as it controls flow of code and
// //  helps to stop the code
// //  and next is recursive relation
// //3rd part is processing like printing updating , incrementation , dec
// //etc etc

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     // base case

//     if (n == 0)
//     {
//         return 1;
//     }

//     // int choti = factorial(n - 1);
//     // int badi = n * choti;

//     // return badi;

//     // the above code is same as this
//     // f(n) = n  *  f(n-1)
//     // we're storing f(n-1) in choti and multiplying it with badi

//     // the same code can be written without storing values in variables

//     return n * factorial(n - 1);

//     // the above is same recursion relation we found as before f(n) = n  *  f(n-1)
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = factorial(n);

//     cout << ans << endl;
// }

// used to find the power of 2

#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    // int smallerproblem = power(n - 1);
    // int biggerproblem = 2 * smallerproblem;
    // return biggerproblem;

    return 2 * power(n - 1);
}

// void print(int n)
// {

//     // this is tail recursive

//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << endl;

//     // recursive relation
//     print(n - 1);
// }

void print(int n)
{

    // this is head recursive

    if (n == 0)
    {
        return;
    }
    print(n - 1);

    cout << n << endl;

    // recursive relation
}

int main()
{
    int n;
    cin >> n;
    print(n);
}

// now priting numbers eg for 5 it should print 5 4 3 2 1
