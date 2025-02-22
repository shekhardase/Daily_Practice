// https://www.codechef.com/problems/MINORMAX?tab=statement

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector < int > a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int min = INT_MAX;
//         int max = INT_MIN;

//         bool flag = true;

//         for (int i = 0; i < n; i++) {
//             if (a[i] > max) {
//                 max = a[i];
//             }
//             if (a[i] < min) {
//                 min = a[i];
//             }
//             if (a[i] != min && a[i] != max) {
//                 flag = false;
//             }
//         }

//         if (flag) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }