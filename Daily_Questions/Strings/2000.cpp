// // https://leetcode.com/problems/reverse-prefix-of-word/description/


// // TOTAL BRUTE FORCE
// class Solution {
// public:
//     string reversePrefix(string word, char ch) {
//         int store = 0;
//         string s = "";

//         for (int i = 0; i < word.size(); i++) {
//             if (word[i] == ch) {
//                 store = i;
//                 break;
//             }
//         }

//         for (int i = 0; i <= store; i++) {
//             s.push_back(word[i]);
//             cout << s[i];
//         }
//         reverse(s.begin(), s.end());

//         for (int i = store+1; i < word.size(); i++) {
//             s.push_back(word[i]);
//         }
//         // cout << s;
//         return s;
//     }
// };