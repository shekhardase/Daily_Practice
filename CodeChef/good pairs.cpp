// https://www.codechef.com/problems/EQPAIR
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(0); // Make IO faster
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         unordered_map < int, int > freq; // To count the frequency of each element
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             freq[x]++;
//         }

//         long long count = 0;
//         for (const auto & p: freq) {
//             int f = p.second;
//             // For each number, we can choose two of them in C(f, 2) ways,
//             // which is f * (f - 1) / 2
//             count +=  (long long) f * (f - 1) / 2;
//         }

//         cout << count << endl;
//     }

//     return 0;
// }