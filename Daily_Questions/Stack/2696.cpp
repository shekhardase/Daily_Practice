// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/?envType=daily-question&envId=2024-10-07

// class Solution
// {
//     public:
//         int minLength(string s)
//         {

//             stack<char> st;
//             for (int i = 0; i < s.size(); i++)
//             {
//                 if (st.size() == 0)
//                 {
//                     st.push(s[i]);
//                     continue;
//                 }

//                 if (s[i] == 'B' && st.top() == 'A')
//                 {
//                     st.pop();
//                 }
//                 else if (s[i] == 'D' && st.top() == 'C')
//                 {

//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push(s[i]);
//                 }
//             }

//             return st.size();
//         }
// };