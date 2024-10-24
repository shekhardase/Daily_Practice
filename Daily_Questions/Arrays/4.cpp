// // https://leetcode.com/problems/median-of-two-sorted-arrays/description/

// // class Solution {
// // public:
// //     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
// //         for(int i = 0 ; i < nums1.size() ; i++)
// //         {
// //             nums2.push_back(nums1[i]);

// //         }

// //         for(int i = 0 ; i  < nums2.size() ; i++)
// //         {
// //             cout<<nums2[i]<< " ";
// //         }

// //         sort(nums2.begin() , nums2.end());

// //         if(nums2.size() %2 == 0)
// //         {
// //             double index = nums2[nums2.size()/2 ]  + nums2[nums2.size()/ 2 -1];
// //             return index /2  ;
// //         }

// //         else{
// //             return nums2[nums2.size() /2 ];
// //         }
// //     }
// // };




// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         if (nums1.size() > nums2.size()) {
//             return findMedianSortedArrays(nums2, nums1);
//         }

//         int m = nums1.size();
//         int n = nums2.size();

//         int l = 0;
//         int r = m;

//         while (l <= r) {
//             int px = l + (r - l) / 2;
//             int py = (m + n + 1) / 2 - px;

//             // left half
//             int x1 = (px == 0) ? INT_MIN : nums1[px - 1];
//             int x2 = (py == 0) ? INT_MIN : nums2[py - 1];

//             // right half
//             int x3 = (px == m) ? INT_MAX : nums1[px];
//             int x4 = (py == n) ? INT_MAX : nums2[py];

//             if (x1 <= x4 && x2 <= x3) {
//                 if ((m + n) % 2 == 1) {
//                     return max(x1, x2);
//                 }
//                 return (max(x1, x2) + min(x3, x4)) / 2.0;
//             }

//             if(x1>x4)
//             {
//                 r = px-1;
//             }
//             else{
//                 l = px +1 ;
//             }
//         }
//         return -1 ;
//     }
// };
