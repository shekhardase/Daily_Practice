// https://leetcode.com/problems/split-array-largest-sum/submissions/1407988209/
// class Solution {
// public:

//     bool isValid(vector<int>& nums , int k , int n , int mid)
//     {
//         int count = 1 ;
//         int current =0 ;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             current+=nums[i];
//             if(current > mid)
//             {
//                 count++;
//                 current = nums[i];
//             }
//             if(count>k)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int splitArray(vector<int>& nums, int k) {
//         int start = *max_element(nums.begin(), nums.end());
//         int end = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             end += nums[i];
//         }
//         int n = nums.size();
//         int result = 0;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (isValid(nums , k , n , mid)) {
//                 result = mid;
//                 end = mid - 1;
//             } else {
//                 start = mid+1;
//             }
//         }
//         return result;
//     }
// };