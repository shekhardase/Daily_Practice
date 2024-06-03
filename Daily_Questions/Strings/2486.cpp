// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

// class Solution
// {
//     public:
//         int appendCharacters(string s, string t)
//         {
//             int i = 0, j = 0;
//             int n = s.size(), m = t.size();
//             int result = 0;
//             while (i < n && j < m)
//             {
//                 if (s[i] == t[j])
//                 {
//                     // result++;
//                     j++;
//                 }

//                     i++;

//             }
//             return m - j;
//         }
// };