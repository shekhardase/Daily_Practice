// https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/?envType=daily-question&envId=2024-10-14
// class Solution {
// public:
//     long long maxKelements(vector<int>& nums, int k) {
//        priority_queue<int> pq;
//         for (int i = 0; i < nums.size(); i++) {
//             pq.push(nums[i]);
//         }
//         long long count = 0;
//         while (k--) {
//             int ele = pq.top();
//             count = count + ele;
//             pq.pop();
//             pq.push(ceil(ele / 3.0));

//         }
//         return count;
//     }
// };