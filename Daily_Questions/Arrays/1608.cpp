// // https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/

// class Solution {
// public:
//     int specialArray(vector<int>& nums) {
//         int maxi  = *max_element(nums.begin() , nums.end());

//         for(int i = 0 ; i <= maxi ; i++)
//         {
//             int count = 0 ;
//             for(int j = 0 ; j < nums.size() ; j++)
//             {
//                 if(i<=nums[j])
//                 {
//                     count++;
//                 }
//             }
//             if(count == i)
//             {
//                 return i ;
//             }

//         }
//         return -1;
//     }
// };