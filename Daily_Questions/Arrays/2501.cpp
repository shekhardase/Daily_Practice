// https://leetcode.com/problems/longest-square-streak-in-an-array/description/?envType=daily-question&envId=2024-10-29class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         int longestStreak = 0;
//         unordered_set<int> uniqueNumbers(nums.begin(), nums.end());

//         for (int startNumber : nums) {
//             int currentStreak = 0;
//             long long current = startNumber;

//             while (uniqueNumbers.find((int)current) != uniqueNumbers.end()) {
//                 currentStreak++;

//                 if (current * current > 1e5) {
//                     break;
//                 }

//                 current = current * current;
//             }

//             // Update the longest streak if necessary
//             longestStreak = max(longestStreak, currentStreak);
//         }

//         // Return -1 if no valid streak found, otherwise return the longest
//         // streak
//         return longestStreak < 2 ? -1 : longestStreak;
//     }
// };
