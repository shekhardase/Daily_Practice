// https://leetcode.com/problems/find-common-elements-between-two-arrays/description/

// class Solution
// {
//     public:
//         vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
//         {
//             vector<int> temp;
//             int count1 = 0;
//             int count2 = 0;

//             for (int i = 0; i < nums1.size(); i++)
//             {
//                 for (int j = 0; j < nums2.size(); j++)
//                 {
//                     if (nums1[i] == nums2[j])
//                     {
//                         count1++;
//                         break;
//                     }
//                 }
//             }

//             for (int i = 0; i < nums2.size(); i++)
//             {
//                 for (int j = 0; j < nums1.size(); j++)
//                 {
//                     if (nums2[i] == nums1[j])
//                     {
//                         count2++;
//                         break;
//                     }
//                 }
//             }

//             temp.push_back(count1);
//             temp.push_back(count2);
//             return temp;
//         }
// };