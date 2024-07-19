
//         https://www.codechef.com/problems/AIRM

//         #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }

//         int D[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> D[i];
//         }

//         map < int, int > m;
//         for (int i = 0; i < n; i++) {
//             m[A[i]]++;
//         }
//         for (int i = 0; i < n; i++) {
//             m[D[i]]++;
//         }
//         int maxi = INT_MIN;
//         for (auto i: m) {
//             maxi = max(maxi, i.second);
//         }
//         cout << maxi << endl;
//     }

// }