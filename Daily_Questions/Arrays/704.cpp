// https://leetcode.com/problems/binary-search/submissions/1295561830/

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start = 0 ;
//         int end= nums.size() - 1;

//         while(start <=end)
//         {
//             int mid = start + (end-start)/2;

//             // if(target > star)

//             if(nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if(nums[mid] < target)
//             {
//                 start = mid + 1;

//             }
//             else
//             {
//                 end = mid-1;
//             }
//         }
//         return -1;
//     }
// };