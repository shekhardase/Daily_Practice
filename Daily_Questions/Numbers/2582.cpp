// https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06

// class Solution
// {
//     public:
//         int passThePillow(int n, int time)
//         {
//            	// Calculate cycle length
//             int cycleLength = (n - 1) *2;

//            	// Find remaining time after full cycles
//             int remainingTime = time % cycleLength;

//            	// Check direction based on remaining time
//             if (remainingTime < n)
//             {
//                 return remainingTime + 1;
//             }
//             else
//             {
//                	// Move backward from n
//                 return n - (remainingTime - (n - 1));
//             }
//         }
// };