// https://leetcode.com/problems/richest-customer-wealth/description/

// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         int money = 0;
//         int maxi = 0 ;

//         for(int i = 0 ; i  < accounts.size() ; i++)
//         {
//             for(int j = 0 ; j < accounts[i].size() ; j++)
//             {
//                 money = money + accounts[i][j];
//             }

//             maxi = max(money , maxi);
//             money = 0 ;
//         }
//         return maxi;
//     }
// };