// https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/

// class Solution
// {
//     public:

//         string rev(string s)
//         {
//             int n = s.length();
//             for (int i = 0; i < n / 2; i++)
//             {
//                 swap(s[i], s[n - 1 - i]);
//             }
//             return s;
//         }

//     int longestPalindrome(vector<string> &words)
//     {
//         map<string, int> m;
//         int ans = 0;
//        	// int freq = 0 ;

//         for (auto i: words)
//         {
//             if (m[rev(i)] > 0)
//             {
//                 ans = ans + 4;
//                 m[rev(i)]--;
//             }
//             else
//             {
//                 m[i]++;
//             }
//         }

//         for (auto i: m)
//         {
//             if (i.second > 0 && i.first == rev(i.first))
//             {
//                 ans = ans + 2;
//                 break;
//             }
//         }
//         return ans;
//     }
// };