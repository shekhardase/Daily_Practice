// https://leetcode.com/problems/valid-anagram/description/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//       sort(s.begin() , s.end());
//       sort(t.begin() , t.end());

//     //   for(int i = 0  ; i < s.size() ; )
//     if(s.size() != t.size())
//     {
//         return false;
//     }

//     for(int i = 0 ; i < s.size() ; i++)
//     {
//         if(s[i] != t[i])
//         {
//             return false;
//         }
//     }
//     return true;

//     }
// };
