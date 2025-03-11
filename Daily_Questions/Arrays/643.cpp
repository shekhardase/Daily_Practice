// https://leetcode.com/problems/maximum-average-subarray-i/description/

// class Solution {
//     public:
//         double findMaxAverage(vector<int>& nums, int k) {
//             double intialwindow = 0;
//             for (int i = 0; i < k; i++) {
//                 intialwindow += nums[i];
//             }
//             int n = nums.size();
//             double point = k;
//             double maxi =  intialwindow;
    
//             for(int i = k ; i < n ; i++)
//             {
//                 intialwindow += nums[i] - nums[i - k ];
//                 maxi = max(intialwindow , maxi);
//             }
            
//             return maxi / k;
//         }
//     };