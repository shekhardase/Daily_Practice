// https://www.codechef.com/problems/MAKEMONEY?tab=statement
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, X, C;
//         cin >> N >> X >> C;

//         vector<int> A(N);
//         int sum = 0, cost = 0;

//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//             if (X - A[i] > C) {
//                 cost += C;
//                 sum += X;
//             } else {
//                 sum += A[i];
//             }
//         }

//         cout << (sum - cost) << endl;
//     }
// }

// int main() {
//     solve();
//     return 0;
// }
