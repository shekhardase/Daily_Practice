// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/?envType=daily-question&envId=2024-07-30

// class Solution {
// public:
//     int minimumDeletions(string s) {
//         int n = s.length();
//         int count = 0 ;

//         stack<char>st;
//         for(int i = 0 ; i < n ; i++)
//         {
//             if(!st.empty()&&s[i]=='a' && st.top() =='b')
//             {
//                 st.pop();
//                 count++;
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//         return count;
//     }
// };