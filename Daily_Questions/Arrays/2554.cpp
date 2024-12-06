// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/?envType=daily-question&envId=2024-12-06

// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) {
//         map<int, int> mpp;

//         for (int i = 0; i < banned.size(); i++) {
//             mpp[banned[i]]++;
//         }

//         // for (auto i : mpp) {
//         //     cout << i.first << "  " << i.second << endl;
//         // }

//         int sum = 0;
//         int count = 0;

//         for (int i = 1; i <= n; i++) {
//             if (mpp.find(i) == mpp.end()) {
//                 if (sum + i <= maxSum) {
//                     sum += i;
//                     count++;
//                 } else
//                     return count;
//             }
//         }

//         return count;
//     }
// };