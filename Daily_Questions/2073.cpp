
// https://leetcode.com/problems/time-needed-to-buy-tickets/description/?envType=daily-question&envId=2024-04-09


// class Solution {
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int n = tickets.size();
//         int sum = 0;
//         while(tickets[k] > 0)
//         {
//             for(int i = 0;i < n && tickets[k] > 0;i++)
//             {
//                 if(tickets[i] != 0)
//                 {
//                     tickets[i]--;
//                     sum++;
//                 }
//             }
//         }
//         return sum;
//     }itgtgg
// };