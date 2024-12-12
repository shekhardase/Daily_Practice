// https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/description/?envType=daily-question&envId=2024-12-11
// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<pair<int, int>> v;

//         for (int i = 0; i < n; i++) {
//             v.push_back(make_pair((nums[i] - k), (nums[i] + k)));
//         }
//         sort(begin(v), end(v));
//         deque<pair<int, int>> dq;
//         int count = 0;
//         for (pair<int, int>& i : v) {
//             while (!dq.empty() && dq.front().second < i.first) {
//                 dq.pop_front();
//             }
//             dq.push_back(i);
//             count = max(count, (int)dq.size());
//         }
//         return count;
//     }
// };