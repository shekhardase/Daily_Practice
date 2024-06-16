// https : // leetcode.com/problems/count-the-number-of-consistent-strings/description/

//         class Solution
// {
// public:
//     int countConsistentStrings(string allowed, vector<string> &words)
//     {
//         int count = 0;
//         for (const string &word : words)
//         {
//             bool isConsistent = true;
//             for (char c : word)
//             {
//                 bool found = false;
//                 for (char a : allowed)
//                 {
//                     if (c == a)
//                     {
//                         found = true;
//                         break;
//                     }
//                 }
//                 if (!found)
//                 {
//                     isConsistent = false;
//                     break;
//                 }
//             }
//             if (isConsistent)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };