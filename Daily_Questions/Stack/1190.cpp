// class Solution
// {
//     public:
//         string reverseParentheses(string s)
//         {
//             stack<int> openeBracket;	//You can use a vector also as stack
//             string result;
//             for (char currentChar: s)
//             {
//                 if (currentChar == '(')
//                 {
//                     openeBracket.push(result.length());
//                 }
//                 else if (currentChar == ')')
//                 {
//                     int start = openeBracket.top();
//                     openeBracket.pop();
//                     reverse(result.begin() + start, result.end());
//                 }
//                 else
//                 {
//                     result += currentChar;
//                 }
//             }
//             return result;
//         }
// };

// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/?envType=daily-question&envId=2024-07-11