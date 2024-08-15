// https://leetcode.com/problems/lemonade-change/submissions/1356235889/?envType=daily-question&envId=2024-08-15

// class Solution
// {
//     public:
//         bool lemonadeChange(vector<int> &bills)
//         {
//             int five = 0;
//             int ten = 0;

//             for (int x: bills)
//             {
//                 if (x == 5)
//                 {
//                     five++;
//                 }
//                 else if (x == 10)
//                 {
//                     if (five > 0)
//                     {
//                         five--;
//                         ten++;
//                     }
//                     else
//                     {
//                         return false;
//                     }
//                 }
//                 else
//                 {
//                     if (five > 0 && ten > 0)
//                     {
//                         five--;
//                         ten--;
//                     }
//                     else if (five > 2)
//                     {
//                         five -= 3;
//                     }
//                     else
//                     {
//                         return false;
//                     }
//                 }
//             }
//             return true;
//         }
// };