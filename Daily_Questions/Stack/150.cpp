// https://leetcode.com/problems/evaluate-reverse-polish-notation/class Solution
// {
//     public:
//         int evalRPN(vector<string> &tokens)
//         {
//             stack<int> st;
//             for (int i = 0; i < tokens.size(); i++)
//             {

//                 if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
//                     tokens[i] == "/")
//                 {
//                     int t1 = st.top();
//                     st.pop();
//                     int t2 = st.top();
//                     st.pop();

//                     if (tokens[i] == "+")
//                     {
//                         st.push(t1 + t2);
//                     }
//                     else if (tokens[i] == "-")
//                     {
//                         st.push(t2 - t1);
//                     }
//                     else if (tokens[i] == "/")
//                     {
//                         st.push(t2 / t1);
//                     }
//                     else if (tokens[i] == "*")
//                     {
//                         st.push(t1 *t2);
//                     }
//                 }
//                 else
//                 {
//                     st.push(stoi(tokens[i]));
//                 }
//             }
//             return st.top();
//         }
// };