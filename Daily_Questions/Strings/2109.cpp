// https://leetcode.com/problems/adding-spaces-to-a-string/description/?envType=daily-question&envId=2024-12-03
// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         int m = s.length();
//         int n = spaces.size();

//         string result = "";
//         int j = 0 ;
//         for(int i = 0 ; i < m ; i++)
//         {
//             if(j < n && i == spaces[j])
//             {
//                 result += " ";
//                 j++;
//             }
//             result +=s[i];
//         }
//         return result;

//     }
// };