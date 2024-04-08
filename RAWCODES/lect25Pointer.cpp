// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cout << "THE n has value- " << n;

//     cout << endl;
//     cout << "And the address of n is- " << &n << endl;

//     int *store = &n;

//     cout << "The address is now stored in store variable " << store << endl;

//     cout << *store << " This should give same value as n so " << n << endl;

//     cout << sizeof(n) << endl;
//     cout << sizeof(store) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    // pointer to int is created , and pointing to some garbage address
    //  int *p = 0;
    //  cout<< *p <<endl;

    // int i = 5;

    // int *q = &i;

    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p = 0 ;
    // p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num = 5;
    int a = num;

    a++;
    cout << num << endl;

    int *p = &num;
    cout << "before" << num << endl;

    (*p)++;

    cout << "After" << num << endl;




    //copying pointer
    int *q = p;

    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;




    //pointer arithmatic
    //important concept

    int i= 2;

    int *t= &i;

    *t++;

    return 0;
}