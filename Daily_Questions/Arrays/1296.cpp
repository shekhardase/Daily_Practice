// // https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/description/

// class Solution {
// public:
//     bool isPossibleDivide(vector<int>& nums, int k) {
//         if (nums.size() % k != 0) {
//             return false;
//         }

//         // map creation to store freq of elements
//         map<int, int> count;
//         for (int num : nums) {
//             count[num]++;
//         }

//         // check map for forming sets
//         for (auto it = count.begin(); it != count.end(); it++) {
//             int num = it->first;
//             int freq = it->second;

//             if (freq > 0) {
//                 // Try to create a consecutive sequence starting with num
//                 // if element has less freq then cant fit in set
//                 for (int i = 0; i < k; i++) {
//                     if (count[num + i] < freq) {
//                         return false;
//                     }
//                     count[num + i] -= freq;
//                 }
//             }
//         }

//         return true;
//     }
// };
