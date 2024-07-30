// https://leetcode.com/problems/container-with-most-water/description/

// class Solution
// {
//     public:
//         int maxArea(vector<int> &height)
//         {
//             int n = height.size();
//             int start = 0;	// Pointer to the start of the array
//             int end = n - 1;	// Pointer to the end of the array
//             int result = 0;	// Variable to store the maximum area

//             while (start < end)
//             {
//                	// Calculate the area with the current start and end positions
//                 int currentArea = min(height[start], height[end]) *(end - start);
//                	// Update the result if the current area is larger
//                 result = max(result, currentArea);

//                	// Move the pointers
//                	// We compare the heights to decide which pointer to move
//                 if (height[start] > height[end])
//                 {
//                    	// If the height at the start is greater than the height at the end
//                    	// move the end pointer to the left
//                     end--;
//                 }
//                 else
//                 {
//                    	// If the height at the start is less than or equal to the height at the end
//                    	// move the start pointer to the right
//                     start++;
//                 }
//             }
//             return result;	// Return the maximum area found
//         }
// };