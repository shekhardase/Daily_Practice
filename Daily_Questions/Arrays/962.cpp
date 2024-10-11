// https://leetcode.com/problems/maximum-width-ramp/description/?envType=daily-question&envId=2024-10-10

// class Solution {
// public:
//     // approach 1 - Brute force
//     int maxWidthRamp(vector<int>& nums) {
//         // int diff = 0;
//         // for (int i = 0; i < nums.size(); i++) {
//         //     for (int j = i + 1; j < nums.size(); j++) {
//         //         if (nums[i] <= nums[j]) {
//         //             diff = max(diff, j - i);
//         //             continue;
//         //         }
//         //     }
//         // }
//         // return diff;

//         // Approach 2 : Better Brute force

//         // int ramp = 0;
//         // int n = nums.size();
//         // for (int i = 0; i < n; i++) {
//         //     for (int j = n - 1; j > i; j--) {
//         //         if (nums[i] <= nums[j]) {
//         //             ramp = max(ramp, j - i);
//         //             break;
//         //         }
//         //     }
//         // }
//         // return ramp;

//         // Appraoch 3 : Best Approach
//         int n = nums.size() ;
//         vector<int>rightMax(n);

//         rightMax[n-1] = nums[n-1];
//         for(int i = n -2 ; i >= 0; i--)
//         {
//             rightMax[i] = max(rightMax[i+1] , nums[i]);
//         }
//         int ramp = 0 ;
//         int i = 0 ;
//         int j = 0;

//         while(j<n)
//         {
//             while(i < j && nums[i] > rightMax[j])
//             {
//                 i++;
//                 // j++;
//             }
//             ramp = max(ramp , j-i);
//             j++;
//         }
//         return ramp;

//     }
// };