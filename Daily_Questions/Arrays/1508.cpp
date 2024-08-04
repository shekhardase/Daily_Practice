// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/description/?envType=daily-question&envId=2024-08-04

// class Solution {
// public:
//     int rangeSum(vector<int>& nums, int n, int left, int right) {

//         vector<int> subarraySums;

//         for (int i = 0; i < n; i++) {
//             int sum = 0;
//             for (int j = i; j < n; j++) {
//                 sum += nums[j];
//                 subarraySums.push_back(sum);
//             }
//         }

//         for (int i = 0; i < subarraySums.size(); i++) {
//             cout << subarraySums[i] << " ";
//         }
//         int newsum = 0;
//         sort(subarraySums.begin(), subarraySums.end());
//         int result = 0;
//         int MOD = 1e9 + 7;
//         for (int i = left - 1; i < right; i++) {
//             result = (result + subarraySums[i]) % MOD;
//         }

//         return result;

//         // return 0;
//     }
// };