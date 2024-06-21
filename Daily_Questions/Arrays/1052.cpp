// https://leetcode.com/problems/grumpy-bookstore-owner/description/?envType=daily-question&envId=2024-06-21

// class Solution
// {
//     public:
//         int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
//         {
//             int n = customers.size();

//             int maxUnstCust = 0;	// in any window(consecutive) of size minutes
//             int currUnst = 0;
//             for (int i = 0; i < minutes; i++)
//             {
//                 currUnst += customers[i] *grumpy[i];
//             }

//             maxUnstCust = currUnst;

//             int i = 0;
//             int j = minutes;
//             while (j < n)
//             {
//                 currUnst += customers[j] *grumpy[j];
//                 currUnst -= customers[i] *grumpy[i];
//                 maxUnstCust = max(maxUnstCust, currUnst);
//                 i++;
//                 j++;
//             }

//             int totalSat = maxUnstCust;
//             for (int i = 0; i < n; i++)
//             {
//                 totalSat += customers[i] *(1 - grumpy[i]);
//             }
//             return totalSat;
//         }
// };