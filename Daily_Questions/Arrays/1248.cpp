// https://leetcode.com/problems/count-number-of-nice-subarrays/description/?envType=daily-question&envId=2024-06-22

// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         unordered_map<int, int>
//             mp; // to remember the odd count if we have seen it in past or not

//         int result = 0;
//         int oddCount = 0;
//         int n = nums.size();
//         mp[oddCount] = 1; // have seen oddCount = 0 once in past

//         for (int i = 0; i < n; i++) {
//             oddCount += (nums[i] % 2);

//             if (mp.count(oddCount - k)) {
//                 result += mp[oddCount - k];
//             }
//             mp[oddCount]++;
//         }

//         return result;
//     }
// };