// https://www.codechef.com/problems/CAESAR?tab=statementhttps://www.codechef.com/problems/CAESAR?tab=statement

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int q;
//     cin >> q;

//     while (q--) {
//         int n;
//         cin >> n;

//         string s, t, u;
//         cin >> s >> t >> u;

//         // Compute the shift value (ROT-K)
//         int diff = (t[0] - s[0] + 26) % 26;

//         // Apply ROT-K shift to string u
//         for (int i = 0; i < n; i++) {
//             u[i] = (u[i] - 'a' + diff) % 26 + 'a';
//         }

//         cout << u << endl;
//     }

//     return 0;
// }
