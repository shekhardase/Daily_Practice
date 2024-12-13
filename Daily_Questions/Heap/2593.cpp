// class Solution {
// public:
//     long long findScore(vector<int>& nums) {
//         priority_queue<pair<long long, long long>,
//                        vector<pair<long long, long long>>,
//                        greater<pair<long long, long long>>>
//             pq;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             pq.push({nums[i], i});
//         }

//         long long ans = 0;

//         while (!pq.empty()) {
//             // int a = pq.top().first;
//             long long index = pq.top().second;

//             if (nums[index] == 0) {
//                 pq.pop();
//                 continue;
//             }

//             ans += nums[index];
//             nums[index] = 0;
//             if (index - 1 >= 0) {
//                 nums[index - 1] = 0;
//             }
//             if (index + 1 < n) {
//                 nums[index + 1] = 0;
//             }
//             pq.pop();
//         }
//         return ans;
//     }
// };

// https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/?envType=daily-question&envId=2024-12-13