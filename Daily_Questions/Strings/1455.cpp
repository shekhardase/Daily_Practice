// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/

// class Solution
// {
// public:
//     int isPrefixOfWord(string sentence, string searchWord)
//     {
//         vector<string> ans;
//         string word = "";

//         // Split the sentence into words
//         for (int i = 0; i < sentence.size(); i++)
//         {
//             if (sentence[i] == ' ')
//             {
//                 if (!word.empty())
//                 {
//                     ans.push_back(word);
//                     word = "";
//                 }
//             }
//             else
//             {
//                 word += sentence[i];
//             }
//         }

//         // Add the last word if it exists
//         if (!word.empty())
//         {
//             ans.push_back(word);
//         }

//         // Check for the prefix in each word
//         for (int i = 0; i < ans.size(); i++)
//         {
//             if (ans[i].find(searchWord) == 0) // Check if `searchWord` is a prefix
//             {
//                 return i + 1; // Return 1-based index
//             }
//         }

//         return -1; // Return -1 if no match is found
//     }
// };
