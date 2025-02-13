// class Solution {
//     public:
//         int minOperations(vector<int>& nums, int k) {
//             priority_queue<long long, vector<long long>, greater<long long>> pq;
    
//             for (auto i : nums) {
//                 pq.push(i);
//             }
    
//             long long x = 0;
//             long long y = 0;
//             int count = 0;
//             while (!pq.empty()) {
    
//                 while(pq.top()<k)
//                 {
//                     x = pq.top();
//                     pq.pop();
//                     y = pq.top();
//                     pq.pop();
    
//                     long long res = min(x , y) * 2 + max(x,y);
//                     pq.push(res);
//                     count++;
//                 }
//                pq.pop();
//             }
//             return count;
//         }
//     };


//     https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13