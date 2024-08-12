// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

// class Solution
// {
//     public:
//         int largestRectangleArea(vector<int> &heights)
//         {
//             stack<int> s;
//             int max_area = 0;
//             int n = heights.size();

//             for (int i = 0; i < n; i++)
//             {
//                	// Maintain an increasing order in stack
//                 while (!s.empty() && heights[s.top()] > heights[i])
//                 {
//                     int height = heights[s.top()];
//                     s.pop();
//                     int width = s.empty() ? i : i - s.top() - 1;
//                     max_area = max(max_area, height *width);
//                 }
//                 s.push(i);
//             }

//            	// Process remaining bars in stack
//             while (!s.empty())
//             {
//                 int height = heights[s.top()];
//                 s.pop();
//                 int width = s.empty() ? n : n - s.top() - 1;
//                 max_area = max(max_area, height *width);
//             }

//             return max_area;
//         }
// };