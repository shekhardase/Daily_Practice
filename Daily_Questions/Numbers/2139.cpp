// https : // leetcode.com/problems/minimum-moves-to-reach-target-score/description/

//         class Solution
// {
// public
//     int minMoves(int target, int maxDoubles)
//     {
//         // if(maxDoubles)
//         int count = 0;
//         while (target != 1)
//         {
//             if (maxDoubles > 0)
//             {
//                 if (target % 2 == 0)
//                 {
//                     target /= 2;
//                     maxDoubles--;
//                 }
//                 else
//                 {
//                     target--;
//                 }
//             }
//             else
//             {
//                 count += target - 2;
//                 target = 1;
//             }
//             count++;
//         }
//         return count;
//     }
// }
