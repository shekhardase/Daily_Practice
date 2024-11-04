// https://leetcode.com/problems/string-compression-iii/description/?envType=daily-question&envId=2024-11-04

// class Solution {
// public:
//     string compressedString(string word) {
//         string ans = "";
//         int count = 1 ;
//         char ch = word[0];

//         for(int i =1 ; i < word.size() ; i++)
//         {
//             if(word[i] == ch && count <9)
//             {
//                 count++;
//             }
//             else{
//                 ans+=(count+'0');
//                 ans+=(ch);
//                 ch = word[i];
//                 count = 1 ;
//             }
//         }

//         ans+=(count+'0');
//         ans+=(ch);
//         return ans; 


//     }
// };