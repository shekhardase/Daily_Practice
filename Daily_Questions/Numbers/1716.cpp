// https : // leetcode.com/problems/calculate-money-in-leetcode-bank/description/?envType=problem-list-v2&envId=p1fnchx3&

//         class Solution
// {
// public:
//     int totalMoney(int n)
//     {
//         int weeks = n / 7;
//         int days = n % 7;
//         int total = 0;

//         // Calculate the total for complete weeks
//         for (int i = 0; i < weeks; i++)
//         {
//             total += (7 * i + 1 + 2 + 3 + 4 + 5 + 6 + 7); // Sum of a week
//         }

//         // Calculate the total for the remaining days
//         for (int i = 0; i < days; i++)
//         {
//             total += (weeks + 1 + i);
//         }

//         return total;
//     }
// };