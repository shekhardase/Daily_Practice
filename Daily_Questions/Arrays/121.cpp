// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         if (prices.empty())
//         {
//             return 0;
//         }

//         int minPrice = prices[0];
//         int maxProfit = 0;

//         for (int i = 1; i < prices.size(); i++)
//         {
//             int currentProfit = prices[i] - minPrice;
//             maxProfit = max(maxProfit, currentProfit);
//             minPrice = min(minPrice, prices[i]);
//         }

//         return maxProfit;
//     }
// };
