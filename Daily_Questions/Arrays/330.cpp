// // https://leetcode.com/problems/patching-array/description/

// class Solution {
//     public int minPatches(int[] nums, int n) {
//         int patch = 0 ;
//         int i = 0 ;
//         long maxReach = 0 ;

//         while(maxReach < n )
//         {
//             if(i<nums.length &&   nums[i] <= maxReach + 1)
//             {
//                 maxReach = maxReach + nums[i];
//                 i++;
//             }
//             else{
//                 //patch no = maxReach + 1;
//                 maxReach = maxReach +  maxReach + 1;
//                 patch++;
//             }
//         }
//         return patch;
//     }
// }