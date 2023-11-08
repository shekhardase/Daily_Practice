#include <iostream>
using namespace std;
// int main()
// {
//     int n = 1;
//     char c = 'a';

//     switch (n)
//     {
//     case 1:
//         switch (c)
//         {
//         case 'a':
//             cout << "This is ass" << endl;
//             break;

//         case 'b':
//         cout<<"This is second asss"<<endl;

//             //
//         }
//         cout << "This is one" << endl;
//         break;

//     case 2:
//         cout << "This is second" << endl;

//     case 3:
//         cout << "This is third" << endl;
//         // break;

//     default:
//         cout << "Default case " << endl;
//         break;
//     }
// }

// int main()
// {
//     int i = 1;

//     while (i = 1)
//     {
//         cout << i;
//         int num = 32;

//         switch (num)
//         {
//         case 1:
//             cout << i;
//         case 32:
//             cout << i + 4;
//             exit(0);
//         }
//     }
// }

// int main()
// {
//     int a;
//     cout << "Enter the valuse of a " << endl;
//     cin >> a;
//     int b;
//     cout << "Enter the value of b " << endl;
//     cin >> b;

//     char sign;
//     cout<<"Enter the operation u want to = ";
//     cin >> sign;

//     switch (sign)
//     {
//     case '+':
//         cout << a + b << endl;
//         break;

//     case '-':
//         cout << a - b << endl;
//         break;

//     case '*':
//         cout << a * b << endl;
//         break;

//     case '%':
//         cout << a % b << endl;
//         break;

//     default:
//     cout<<"enter the valid operation "<<endl;
//         break;
//     }
// }

// int main()
// {
//     int Amount = 1330;
//     int Rs_100, Rs_50, Rs_30, Rs_10;

//     int Remaining = 0;

//     switch (1)
//     {
//     case 1:
//     Remaining = Amount %100;
//     Remaining = Remaining *100;
//     Amount = Amount - Remaining;

//     case 2 :
//     Remaining = Amount %50;
//     Remaining = Remaining*50;
//     Amount = Amount - Remaining;

//     case 3 :
//     Remaining = Amount %30;
//     Remaining = Remaining *30;
//     Amount = Amount - Remaining;

//     case 4 :
//     Remaining = Amount %10;
//     Remaining = Remaining *10;
//     Amount = Amount - Remaining;

//     default:
//         break;
//     }

//     cout<<Remaining<<endl;
//     cout<<Amount<<endl;
// }

#include <iostream>
using namespace std;

// int main()
// {
//     int amount;
//     cin >> amount;
//     int Rs100, Rs50, Rs20, Rs1;

//     switch (1)
//     {
//     case 1:
//         Rs100 = amount / 100;
//         amount = amount % 100;
//         cout << "No of 100 Rupee =" << Rs100 << endl;

//     case 2:
//         Rs50 = amount / 50;
//         amount = amount % 50;
//         cout << "No of 50 Rupee =" << Rs50 << endl;

//     case 3:
//         Rs20 = amount / 20;
//         amount = amount % 20;
//         cout << "No of 20 Rupee =" << Rs20 << endl;

//     case 4:
//         Rs1 = amount / 1;
//         amount = amount % 1;
//         cout << "No of 1 Rupee =" << Rs1 << endl;
//     }
//     return 0;
// }

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int numerator = factorial(n);
//     int denominator = factorial(r) *  factorial(n - r);

//     int answer = numerator / denominator;
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int r;
//     cin >> r;

//     int result = nCr(n, r);
//     cout << result;
// }

// void count(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     count(n);
// }

// bool isprime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         /* code */
//         if (n%i == 0 )
//         {
//             return 0 ;
//         }

//     }

//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;

//     isprime(n);

// }

// int ap(int n)
// {
//     int ans = n * 3 + 7;
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int result = ap(n);
//    cout<<result;
// }

// void update(int a)
// {
//     a = a /2;
// }

// int main()
// {
//     int a =10;
//     update(a);
//     cout<<a<<endl;
// }

// int update(int a)
// {
//     int ans = a*a;
//     return ans;

// }

// int main()
// {
//     int a =14;
//     a = update(a);
//     cout<<a<<endl;
// }