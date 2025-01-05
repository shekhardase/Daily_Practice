// https://leetcode.com/problems/shifting-letters/description/


// class Solution {
// public:
//     string shiftingLetters(string s, vector<int>& shifts) {
//         int n = shifts.size();
//         vector<int> newvec(n);

//         int sum = shifts[n - 1];
//         newvec[n - 1] = sum % 26;

//         for (int i = n - 2; i >= 0; i--) {
//             sum = (shifts[i] + sum) % 26;
//             newvec[i] = sum;
//         }

//         for (int i = 0; i < n; i++) {
//             s[i] = 'a' + (s[i] - 'a' + newvec[i]) % 26;
//         }

//         return s;
//     }
// };