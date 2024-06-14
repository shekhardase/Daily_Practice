// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/

// class Solution
// {
//     public:
//         int minOperations(vector<int> &nums)
//         {
//             int minIncrements = 0;

//             for (int i = 1; i < nums.size(); i++)
//             {
//                	// Ensure each element is greater than its previous
//                 if (nums[i] <= nums[i - 1])
//                 {
//                    	// Add the required increment to minIncrements
//                     int increment = nums[i - 1] + 1 - nums[i];
//                     minIncrements += increment;

//                    	// Set the element to be greater than its previous
//                     nums[i] = nums[i - 1] + 1;
//                 }
//             }

//             return minIncrements;
//         }
// };