// https : // leetcode.com/problems/most-profit-assigning-work/description/?envType=daily-question&envId=2024-06-18

//         class Solution
// {
// public:
//     int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
//     {
//         int total_profit = 0;
//         int n = difficulty.size();
//         int m = worker.size();
//         for (int j = 0; j < m; ++j)
//         {
//             int max_profit = 0;
//             for (int i = 0; i < n; ++i)
//             {
//                 if (worker[j] >= difficulty[i])
//                 {
//                     max_profit = max(max_profit, profit[i]);
//                 }
//             }
//             total_profit = total_profit + max_profit;
//         }
//         return total_profit;
//     }
// };