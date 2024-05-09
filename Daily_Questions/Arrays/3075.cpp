// // https://leetcode.com/problems/maximize-happiness-of-selected-children/description/?envType=daily-question&envId=2024-05-09

// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//         sort(happiness.rbegin(), happiness.rend());

//         long long totalHappiness = 0;
//         int count = 0;
//         for (int i = 0; i < k; i++) {
//             totalHappiness = totalHappiness + max(happiness[i] - count, 0);
//             count++;
//         }

//         return totalHappiness;
//     }
// };
