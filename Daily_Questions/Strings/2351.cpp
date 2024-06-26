// https://leetcode.com/problems/first-letter-to-appear-twice/description/

// class Solution
// {
//     public:
//         char repeatedCharacter(string s)
//         {
//             int n = s.size();
//             map<char, int> count;

//             for (int i = 0; i < n; i++)
//             {
//                 count[s[i]]++;

//                 if (count[s[i]] == 2)
//                 {
//                     return s[i];
//                 }
//             }

//            	// This return statement will never be reached if there's guaranteed to be a repeated character.
//            	// If there's no guarantee, you might want to handle this case appropriately.
//             return '\0';
//         }
// };