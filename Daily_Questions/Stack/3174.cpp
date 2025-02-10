// https://leetcode.com/problems/clear-digits/description/?envType=daily-question&envId=2025-02-10


// class Solution {
// public:
//     string clearDigits(string s) {

//         stack<char> st;
//         for (int i = 0; i < s.size(); i++) {
//             if (!isdigit(s[i])) {
//                 st.push(s[i]);
//             } else if (!st.empty()) {

//                 st.pop();
//             }
//         }

//         string str = "";

//         while(!st.empty())
//         {
//             str = st.top() + str;
//             st.pop();
//         }

//         return str;
//     }
// };