// https://www.codechef.com/problems/HILLS

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // your code goes here

//     int t;
//     cin >> t;

//     while (t--) {
//         int n, u, d;
//         cin >> n >> u >> d;
//         bool parachute = true;
//         vector<int> hills(n);

//         for (int i = 0; i < n; i++) cin >> hills[i];

//         int idx = 0;
//         for (int i = 0; i < n - 1; i++) {
//             int upper = hills[i + 1] - hills[i];
//             int lower = hills[i] - hills[i + 1];

//             if (upper > u) { // Climbing restriction
//                 break;
//             }

//             if (lower > d) { // Descent restriction
//                 if (parachute) {
//                     parachute = false; // Use parachute
//                 } else {
//                     break; // No parachute, stop
//                 }
//             }

//             idx = i + 1; // Update idx to the current hill
//         }

//         cout << idx + 1 << endl; // Convert 0-based index to 1-based index
//     }

//     return 0;
// }