// https : // leetcode.com/problems/valid-parenthesis-string/description/

//         class Solution
// {
// public:
//     bool checkValidString(string s)
//     {
//         stack<int> stack;
//         vector<int> stars;

//         for (int i = 0; i < s.length(); ++i)
//         {
//             if (s[i] == '(')
//             {
//                 stack.push(i);
//             }
//             else if (s[i] == '*')
//             {
//                 stars.push_back(i);
//             }
//             else
//             { // s[i] == ')'
//                 if (!stack.empty())
//                 {
//                     stack.pop();
//                 }
//                 else if (!stars.empty())
//                 {
//                     stars.pop_back();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//         }

//         while (!stack.empty() && !stars.empty())
//         {
//             if (stack.top() < stars.back())
//             {
//                 stack.pop();
//                 stars.pop_back();
//             }
//             else
//             {
//                 break;
//             }
//         }

//         return stack.empty();
//     }
// };