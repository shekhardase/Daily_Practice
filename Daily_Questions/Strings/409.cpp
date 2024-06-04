// // https://leetcode.com/problems/longest-palindrome/description/

// class Solution
// {
//     public:
//         int longestPalindrome(string s)
//         {

//             int count = 0;
//             if (s.size() == 1)
//             {
//                 return 1;
//             }
//             else
//             {
//                 unordered_map<char, int> freq;
//                 for (char c: s)
//                 {
//                     freq[c]++;
//                 }
//                 for (auto it = freq.begin(); it != freq.end(); ++it)
//                 {
//                     cout << it->first << ": " << it->second << endl;
//                 }

//                 bool isOdd = false;
//                 for (auto it = freq.begin(); it != freq.end(); it++)
//                 {
//                     if (it->second % 2 == 0)
//                     {
//                         count = count + it->second;
//                     }
//                     else
//                     {
//                         count = count + it->second - 1;
//                         isOdd = true;
//                     }
//                 }

//                 if (isOdd)
//                 {
//                     count = count + 1;
//                 }

//                 return count;
//             }
//         }
// };