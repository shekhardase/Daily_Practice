// https://leetcode.com/problems/find-the-encrypted-string/description/

// class Solution {
// public:
//     string getEncryptedString(string s, int k) {
//         string str = "";
//         for (int i = 0; i < s.size(); i++) {
//             str.push_back(s[((i + k) % s.size())]);
//         }
//         return str;
//     }
// };