// https : // leetcode.com/problems/find-the-difference-of-two-arrays/description/

//         class Solution
// {
// public:
//     vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
//     {
//         unordered_map<int, bool> mpp1;
//         unordered_map<int, bool> mpp2;

//         for (auto i : nums1)
//         {
//             mpp1[i] = true;
//         }
//         for (auto i : nums2)
//         {
//             mpp2[i] = true;
//         }

//         vector<int> v1;
//         vector<int> v2;

//         for (auto i : nums1)
//         {
//             if (mpp2[i] == false)
//             {
//                 v1.push_back(i);
//                 mpp2[i] = true;
//             }
//         }
//         for (auto i : nums2)
//         {
//             if (mpp1[i] == false)
//             {
//                 v2.push_back(i);
//                 mpp1[i] = true;
//             }
//         }

//         vector<vector<int>> ans;
//         ans.push_back(v1);
//         ans.push_back(v2);
//         return ans;
//     }
// };