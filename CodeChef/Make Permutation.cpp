// https://www.codechef.com/problems/MAKEPERM?tab=statement

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int &it : arr) {
//             cin >> it;
//         }

//         sort(arr.begin(), arr.end());

//         bool possible = true;
//         for (int i = 0; i < n; ++i) {
//             if (arr[i] > i + 1) {
//                 possible = false;
//                 break;
//             }
//         }

//         if (possible) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }
