// // https://leetcode.com/problems/count-the-number-of-special-characters-i/description/
// class Solution
// {
//     public:
//         int numberOfSpecialChars(string word)
//         {
//             vector<int> smallChar(26, 0);
//             vector<int> capitalChar(26, 0);
//             int count = 0;
//             for (char ch: word)
//             {
//                 if (ch >= 'a' && ch <= 'z')
//                 {
//                     smallChar[ch - 'a'] = 1;
//                 }
//                 else
//                 {
//                     capitalChar[ch - 'A'] = 1;
//                 }
//             }
//             for (int i = 0; i < 26; i++)
//             {
//                 if (smallChar[i] == 1 && capitalChar[i] == 1)
//                 {
//                     count++;
//                 }
//             }
//             return count;
//         }
// };