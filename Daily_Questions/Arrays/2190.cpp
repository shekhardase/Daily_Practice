// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/submissions/1330922174/

// class Solution {
// public:
//     int mostFrequent(vector<int>& nums, int key) {
//         map<int, int> mp;
//         int freq = 0;
//         int ans = 0;
//         for (int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] == key) {
//                 mp[nums[i + 1]]++;
//             }
//         }

//         for (auto i : mp) {
//             if (i.second > freq) {
//                 ans = i.first, freq = i.second;
//             }
//         }
//         return ans;
//     }
// };