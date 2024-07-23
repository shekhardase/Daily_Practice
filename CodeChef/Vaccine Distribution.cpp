// https://www.codechef.com/problems/VACCINE2

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N, D;
//         cin >> N >> D;
//         vector < int > at_risk;
//         vector < int > not_at_risk;

//         for (int i = 0; i < N; ++i) {
//             int age;
//             cin >> age;
//             if (age >= 80 || age <= 9) {
//                 at_risk.push_back(age);
//             } else {
//                 not_at_risk.push_back(age);
//             }
//         }

//         // Calculate days for at-risk group
//         int days_at_risk = (at_risk.size() + D - 1) / D;

//         // Calculate days for not-at-risk group
//         int days_not_at_risk = (not_at_risk.size() + D - 1) / D;

//         // Total days required
//         int total_days = days_at_risk + days_not_at_risk;

//         cout << total_days << endl;
//     }

// }