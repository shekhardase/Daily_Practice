// https://www.codechef.com/problems/CAKEHALF?tab=statement
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c = 0;
//         cin >> a >> b;
//         while (a > b || a < b)
//         {
//             if (a > b)
//             {
//                 if (a % 2 == 0)
//                 {
//                     c += a / 2;
//                 }
//                 else
//                 {
//                     c += (a / 2) + 1;
//                 }
//                 a /= 2;
//             }
//             else
//             {
//                 if (b % 2 == 0)
//                 {
//                     c += b / 2;
//                 }
//                 else
//                 {
//                     c += (b / 2) + 1;
//                 }
//                 b /= 2;
//             }
//         }
//         cout << c << endl;
//     }
// }