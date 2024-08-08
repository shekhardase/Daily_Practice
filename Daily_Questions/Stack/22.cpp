// https://leetcode.com/problems/generate-parentheses/description/
// class Solution {
// public:
//     void recursion(string s, int open, int close, int n, vector<string>& ans) {

//         if (open == n && close == n) {
//             ans.push_back(s);
//             return;
//         }
//         if (open < n) {
//             recursion(s + "(", open + 1, close, n, ans);
//         }

//         if (close < open) {
//             recursion(s + ")", open, close + 1, n, ans);
//         }
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         // if there is n
//         // then we must add n opening and n closing brackets

//         // add opening only when open < n
//         // add closing only when closed < open
//         // valid only iff open == close == n;
//         recursion("", 0, 0, n, ans);
//         return ans;
//     }
// };