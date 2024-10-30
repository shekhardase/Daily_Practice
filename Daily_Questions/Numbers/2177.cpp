// https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/description/

// Find Three Consecutive Integers That Sum to a Given Number


// class Solution {
// public:
//     vector<long long> sumOfThree(long long num) {
//         vector<long long> ans;

//         if ((num % 3) != 0) {
//             return {};
//         }

//         long long start = num / 3;

//         ans.push_back(start - 1);
//         ans.push_back(start);
//         ans.push_back(start + 1);

//         return ans;
//     }
// };