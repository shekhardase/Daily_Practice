// // // // https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/
// // // class Solution
// // // {
// // // public:
// // //     int minAddToMakeValid(string s)
// // //     {
// // //         stack<char> st;

// // //         for (int i = 0; i < s.length(); i++)
// // //         {
// // //             char ch = s[i];

// // //             if (ch == '(')
// // //             {
// // //                 st.push(ch);
// // //             }
// // //             else
// // //             {
// // //                 if (st.size() > 0 && st.top() == '(')
// // //                 {
// // //                     st.pop();
// // //                 }
// // //                 else
// // //                 {
// // //                     st.push(ch);
// // //                 }
// // //             }
// // //         }
// // //         return st.size();
// // //     }
// // // };


// // // main approach to solve this question is to revmove valid parenthesis and return size 
// // // by revmoving vaLID parenthesis we get invalid which are required equal cost to make them valid
// // // so just give size back




// // https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?envType=daily-question&envId=2024-10-09

// // class Solution {
// // public:
// //     int minAddToMakeValid(string s) {
// //         stack<char>st;
// //         for(int i =  0 ; i < s.size() ; i++)
// //         {
// //             char ch = s[i];
// //             if(ch == '(')
// //             {
// //                 st.push(ch);
// //             }
// //             else{
// //                 if(!st.empty() && st.top() == '(')
// //                 {
// //                     st.pop();
// //                 }
// //                 else{
// //                     st.push(ch);
// //                 }
// //             }
// //         }

// //         return st.size();
// //     }
// // };

// // Daily question repeated
// // Approach First clear the valid parenthesis by push and pop in stack
// if stack contains ( and next is )
// we can simply pop that top element in stack
// if does not contain continue;
// at last stack will only contain unbalenced parethesis hence return size of stack as they need to be changed