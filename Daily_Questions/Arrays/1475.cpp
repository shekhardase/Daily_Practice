// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/?envType=daily-question&envId=2024-12-18

//     class Solution {
//     public:
//         vector<int> finalPrices(vector<int>& prices) {
//             stack<int>st;
//             int n  = prices.size() ;
//             for(int i = 0 ; i < n ; i++)
//             {
//                 while(!st.empty() && prices[i] <= prices[st.top()])
//                 {
//                     int index=  st.top();
//                     st.pop();
//                     prices[index] -= prices[i];
//                 }
//                 st.push(i);
//             }
//             return prices;
//         }
//     };

//     class Solution {
// public:
//     vector<int> finalPrices(vector<int>& prices) {
//         stack<int>st;
//         int n  = prices.size() ;
//         for(int i = 0 ; i < n ; i++)
//         {
//             while(!st.empty() && prices[i] <= prices[st.top()])
//             {
//                 int index=  st.top();
//                 st.pop();
//                 prices[index] -= prices[i];
//             }
//             st.push(i);
//         }
//         return prices;
//     }
// };