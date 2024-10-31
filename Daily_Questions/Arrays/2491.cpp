// https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/submissions/1438842096/?envType=daily-question&envId=2024-10-31

// class Solution {
// public:
//     long long dividePlayers(vector<int>& skill) {
//         // Step 1: Sort the array
//         sort(skill.begin(), skill.end());

//         int start = 0;
//         int end = skill.size() - 1;
//         long long chemistry_sum = 0;

//         // Step 2: Define target team skill sum
//         int target_sum = skill[start] + skill[end];

//         // Step 3: Iterate and form pairs
//         while (start < end) {
//             if (skill[start] + skill[end] != target_sum) {
//                 return -1; // Teams cannot have equal skill sums
//             }
//             chemistry_sum += (long long)skill[start] * skill[end];
//             start++;
//             end--;
//         }

//         return chemistry_sum;
//     }
// };
