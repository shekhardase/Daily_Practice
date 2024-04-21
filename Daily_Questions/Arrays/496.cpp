// // https://leetcode.com/problems/next-greater-element-i/submissions/1238391733/

// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>temp;
// int k = 0 ;
//         for(int i = 0 ; i < nums1.size() ; i++)
//         {
//             for(int j = 0 ; j < nums2.size() ; j++)
//             {
//                 if(nums1[i] == nums2[j])
//                 { while (j < nums2.size()){

//                         if (nums2[j] > nums1[i]){

//                             temp.push_back(nums2[j]) ;
//                             k = 1 ;
//                             break ;
//                         }

//                         j ++ ;
//                     }

//                     if (k == 0){

//                         temp.push_back(-1) ;
//                         k = 0 ;
//                         break ;
//                     }

//                     else{

//                         k = 0 ;

//                         break ;
//                     }
//                 }
//             }
//         }
//         return temp;
//     }
// };

/*
Steps

1 traverse till equal elements found
 NOTE : Create a variable to keep track for next greater element (bool will work)
2 if found traverse the next part after equal
3 if no next greater found change bool and push -1
4 if next greater found change bool and push that element
 */
