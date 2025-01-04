// https://www.codechef.com/problems/CHEGLOVE?tab=statement

// #include <iostream>

// using namespace std;

// int main() {
//     // your code goes here
//     int t, n;
//     for (cin >> t; t--;) {
//         cin >> n;
//         int L[n], G[n], f = 1, b = 1;
//         for (int i = 0; i < n; ++i) cin >> L[i];
//         for (int i = 0; i < n; ++i) cin >> G[i];
//         for (int i = 0; i < n; ++i) {
//             if (L[i] > G[i]) f = 0;
//             if (L[i] > G[n - 1 - i]) b = 0;
//         }
//         cout << (b && f ? "both" : b ? "back" : f ? "front" : "none") << endl;
//     }
//     return 0;
// }