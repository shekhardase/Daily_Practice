// // https://www.codechef.com/problems/CREATEPERM?tab=statement

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector < int > v(n + 1);
//         int id = 1;
//         for (int i = 1; i <= n; i += 2) {
//             v[i] = id;
//             id++;
//         }
//         for (int i = 2; i <= n; i += 2) {
//             v[i] = id;
//             id++;
//         }
//         for (int i = 1; i <= n; i++) {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }