// https://www.codechef.com/problems/EVMHACK

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, c, x, y, z;
//         cin >> a >> b >> c >> x >> y >> z;

//         int total_votes = x + y + z;
//         int actual_votes = a + b + c;

//         // Calculate votes needed to win
//         int votes_needed = total_votes / 2 + 1;

//         // Check if Chef can win by hacking any one EVM
//         if (actual_votes + (x - a) >= votes_needed || 
//             actual_votes + (y - b) >= votes_needed || 
//             actual_votes + (z - c) >= votes_needed) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
