
// https://www.codechef.com/problems/KO_MON


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long x;
//         cin >> x;
//         vector < long long > nums(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> nums[i];
//         }

//         sort(nums.rbegin(), nums.rend());

//         for (int i = 0; i < n; i++)
//         {
//             nums[i] = nums[i] + i * x;
//         }

//         long long maxi = 0;
//         for (int i = 0; i < n; i++)
//             maxi = max(maxi, nums[i]); // Greatest health.

//         cout << maxi << endl;


//     }
// }