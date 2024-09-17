// https://leetcode.com/problems/uncommon-words-from-two-sentences/description/?envType=daily-question&envId=2024-09-17
// class Solution
// {
//     public:
//         vector<string> uncommonFromSentences(string s1, string s2)
//         {
//             unordered_map<string, int> wordCount;
//             vector<string> result;
//             string word;

//             stringstream ss1(s1);

//             while (ss1 >> word)
//             {
//                 wordCount[word]++;
//             }

//             stringstream ss2(s2);
//             while (ss2 >> word)
//             {
//                 wordCount[word]++;
//             }

//             for (auto i: wordCount)
//             {
//                 if (i.second == 1)
//                 {
//                     result.push_back(i.first);
//                 }
//             }
//             return result;
//         }
// };