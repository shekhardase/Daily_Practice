// https://leetcode.com/problems/count-common-words-with-one-occurrence/description/

// class Solution
// {
//     public:
//         int countWords(vector<string> &words1, vector<string> &words2)
//         {
//             unordered_map<string, int> m;
//             int count = 0;
//             for (auto x: words1)
//             {
//                 m[x]++;
//             }
//             for (auto x: words2)
//                 if (m[x] < 2)
//                 {
//                     m[x]--;
//                 }
//             for (auto x: m)
//                 if (x.second == 0)
//                 {
//                     count++;
//                 }
//             return count;
//         }
// };