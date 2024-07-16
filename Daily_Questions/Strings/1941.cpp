// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/

// class Solution {
// public:
//     bool areOccurrencesEqual(string s) {
//         map<char, int> M;

//         // Count frequency of each character
//         for (char c : s) {
//             M[c]++;
//         }

//         // Get the frequency of the first character
//         int frequency = M.begin()->second;

//         // Check if all characters have the same frequency
//         for (auto& i : M) {
//             if (i.second != frequency) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };
