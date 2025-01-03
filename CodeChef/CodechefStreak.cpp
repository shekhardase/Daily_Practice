// https://www.codechef.com/problems/CS2023_STK

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> b[i];
//         }

//         int counta = 0, countb = 0;
//         int finala = INT_MIN, finalb = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             if (a[i] == 0) {
//                 finala = max(counta, finala);
//                 counta = 0;
//             } else {
//                 counta++;
//             }
//         }
//         finala = max(counta, finala); // Update for last streak in 'a'

//         for (int i = 0; i < n; i++) {
//             if (b[i] == 0) {
//                 finalb = max(countb, finalb);
//                 countb = 0;
//             } else {
//                 countb++;
//             }
//         }
//         finalb = max(countb, finalb); // Update for last streak in 'b'

//         if (finala == finalb) {
//             cout << "Draw" << endl;
//         } else if (finala < finalb) {
//             cout << "Addy" << endl;
//         } else {
//             cout << "Om" << endl;
//         }
//     }
//     return 0;
// }
