// https://leetcode.com/problems/reach-a-number/description/class Solution
// {
//     public:
//         int reachNumber(int target)
//         {
//             target = abs(target);
//             int sum = 0;
//             int steps = 0;
//             while (sum < target)
//             {
//                 sum += steps;
//                 steps++;
//             }

//             while ((sum - target) % 2 != 0)
//             {
//                 sum += steps;
//                 steps++;
//             }
//             return steps - 1;
//         }
// };