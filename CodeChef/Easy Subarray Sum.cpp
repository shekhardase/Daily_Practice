// #include <bits/stdc++.h>

// using namespace std;
// #define int long long

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         std::vector < int > a(n);
//         for (auto & i: a) {
//             cin >> i;
//         }
//         int left = 0, right = n - 1, count = 0;
//         while (a[left] <= 0 && left < n) {
//             left++;
//         }
//         while (a[right] <= 0 && right >= 0) {
//             right--;
//         }

//         if (right <= left) {
//             cout << "0\n";
//         } else {
//             for (int i = left; i <= right; i++) {
//                 if (a[i] < 0) {
//                     count++;
//                 }
//             }
//             cout << count << '\n';
//         }
//     }
// }