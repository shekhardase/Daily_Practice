// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         for(int i = 0 ; i < nums1.size() ; i++)
//         {
//             nums2.push_back(nums1[i]);

//         }

//         for(int i = 0 ; i  < nums2.size() ; i++)
//         {
//             cout<<nums2[i]<< " ";
//         }

//         sort(nums2.begin() , nums2.end());

//         if(nums2.size() %2 == 0)
//         {
//             double index = nums2[nums2.size()/2 ]  + nums2[nums2.size()/ 2 -1];
//             return index /2  ;
//         }

//         else{
//             return nums2[nums2.size() /2 ];
//         }
//     }
// };