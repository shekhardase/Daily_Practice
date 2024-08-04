// // https://leetcode.com/problems/trapping-rain-water/description/

// // class Solution
// // {
// //     public:
// //         int trap(vector<int> &height)
// //         {
// //             int left = 0;
// //             int right = height.size() - 1;
// //             int leftMax = height[left];
// //             int rightMax = height[right];
// //             int water = 0;

// //             while (left < right)
// //             {
// //                 if (leftMax < rightMax)
// //                 {
// //                     left++;
// //                     leftMax = max(leftMax, height[left]);
// //                     water += leftMax - height[left];
// //                 }
// //                 else
// //                 {
// //                     right--;
// //                     rightMax = max(rightMax, height[right]);
// //                     water += rightMax - height[right];
// //                 }
// //             }

// //             return water;
// //         }
// // };


// https://leetcode.com/problems/trapping-rain-water/submissions/1344117543/


// class Solution
// {
// public:
//     int trap(vector<int> &height)
//     {
//         int n = height.size();
//         if (n == 0) return 0;

//         vector<int> left(n);
//         vector<int> right(n);

//         left[0] = height[0];
//         for (int i = 1; i < n; i++)
//         {
//             left[i] = max(left[i - 1], height[i]);
//         }

//         right[n - 1] = height[n - 1];
//         for (int i = n - 2; i >= 0; i--)
//         {
//             right[i] = max(right[i + 1], height[i]);
//         }

//         int water = 0;
//         for (int i = 0; i < n; i++)
//         {
//             water += min(left[i], right[i]) - height[i];
//         }
//         return water;
//     }
// };
