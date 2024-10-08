//     https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/?envType=daily-question&envId=2024-10-06

//     class Solution {
// public:
//     int minSwaps(string s) {
//         stack<char>st;
//         int count =  0 ;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if( s[i]== '[')
//             {
//                 st.push(s[i]);
//             }
//             else{
//                 if(!st.empty())
//                 {
//                     st.pop();
//                 }
//                 else{
//                     count++;
//                 }
//             }
//         }
//         return (count + 1) / 2;
//     }
// };

// Approach:
// with help of stack we can keep track of unbalence brackets
// if we found balecnce bracket we can simply pop from stack
// if it contains closing ] and without opening it means it need swap and it is unbalence bracket
// hence count++;
// (i.e unbalnce bracket count)

//     swap = count + 1 / 2;