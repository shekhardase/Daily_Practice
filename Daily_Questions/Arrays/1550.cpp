// https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2024-07-01

// class Solution
// {
//     public:
//         bool threeConsecutiveOdds(vector<int> &arr)
//         {
//             int count = 0;
//             for (int num: arr)
//             {
//                 if (num % 2 != 0)
//                 {
//                     count++;
//                     if (count == 3)
//                     {
//                         return true;
//                     }
//                 }
//                 else
//                 {
//                     count = 0;
//                 }
//             }
//             return false;
//         }
// };