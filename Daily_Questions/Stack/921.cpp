// // https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/
// class Solution
// {
// public:
//     int minAddToMakeValid(string s)
//     {
//         stack<char> st;

//         for (int i = 0; i < s.length(); i++)
//         {
//             char ch = s[i];

//             if (ch == '(')
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 if (st.size() > 0 && st.top() == '(')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push(ch);
//                 }
//             }
//         }
//         return st.size();
//     }
// };


// main approach to solve this question is to revmove valid parenthesis and return size 
// by revmoving vaLID parenthesis we get invalid which are required equal cost to make them valid
// so just give size back