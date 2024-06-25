// https : // leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/

//         class Solution
// {
// public:
//     int mostWordsFound(vector<string> &sentences)
//     {
//         int cnt = 0, max = 0;
//         for (auto s : sentences)
//         {
//             cnt = 0;
//             for (auto x : s)
//             {
//                 if (x == ' ')
//                     cnt++;
//             }
//             if (++cnt > max)
//                 max = cnt;
//         }
//         return max;
//     }
// };