// https://leetcode.com/problems/removing-stars-from-a-string/description/

// class Solution {
//     public:
//         string removeStars(string s) {
//             stack<char> st;

//             for (int i = 0; i < s.size(); i++) {
//                 if (s[i] != '*') {
//                     st.push(s[i]);
//                 }
//                 if (s[i] == '*' && !st.empty()) {
//                     st.pop();
//                 }
//             }

//             string res = "";
//             while (!st.empty()) {
//                 res += st.top();
//                 st.pop();
//             }
//             reverse(res.begin(), res.end());
//             return res;
//         }
//     };