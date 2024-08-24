// // https://leetcode.com/problems/find-peak-element/submissions/1367005600/
// // class Solution {
// // public:
// //     int findPeakElement(vector<int>& nums) {
// //         if(nums.size()==1)
// //         {
// //             return 0;
// //         }
// //         if(nums[0]>nums[1])
// //         {
// //             return 0;
// //         }
// //         if(nums[nums.size()-1]>nums[nums.size()-2])
// //         {
// //             return nums.size()-1;
// //         }
// //         int ans = 0 ;
// //         for(int i =1 ; i < nums.size() -1; i++)
// //         {
// //             if(nums[i]>nums[i-1] && nums[i]> nums[i+1])
// //             {
// //                 ans = i;
// //             }
// //         }
// //         return ans;
// //     }
// // };

// class Solution
// {
//     public:
//         int findPeakElement(vector<int> &nums)
//         {

//            	// edge cases --- 
//             if (nums.size() == 1)
//             {
//                 return 0;
//             }
//             if (nums[0] > nums[1])
//             {
//                 return 0;
//             }
//             if (nums[nums.size() - 1] > nums[nums.size() - 2])
//             {
//                 return nums.size() - 1;
//             }

//            	// binary search 
//            	// 3 cases 
//            	//1 mid will be peak (will greater than mid -1 and mid + 1)
//            	//2 peak before mid
//            	//3 peak after mid
//             int start = 1;
//             int end = nums.size() - 2;
//             while (start <= end)
//             {
//                 int mid = start + (end - start) / 2;

//                	//case 1
//                 if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
//                 {
//                     return mid;
//                 }

//                	//case 2
//                 else if (nums[mid] < nums[mid - 1])
//                 {
//                     end = mid - 1;
//                 }

//                	//case 3
//                 else if (nums[mid] < nums[mid + 1])
//                 {
//                     start = mid + 1;
//                 }
//             }
//             return -1;
//         }
// };