// // https://leetcode.com/problems/next-greater-element-i/

// // class Solution
// // {
// //     public:
// //         vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
// //         {
// //             vector<int> temp;
// //             int k = 0;
// //             for (int i = 0; i < nums1.size(); i++)
// //             {
// //                 for (int j = 0; j < nums2.size(); j++)
// //                 {
// //                     if (nums1[i] == nums2[j])
// //                     {
// //                         while (j < nums2.size())
// //                         {

// //                             if (nums2[j] > nums1[i])
// //                             {

// //                                 temp.push_back(nums2[j]);
// //                                 k = 1;
// //                                 break;
// //                             }

// //                             j++;
// //                         }

// //                         if (k == 0)
// //                         {

// //                             temp.push_back(-1);
// //                             k = 0;
// //                             break;
// //                         }
// //                         else
// //                         {

// //                             k = 0;

// //                             break;
// //                         }
// //                     }
// //                 }
// //             }
// //             return temp;
// //         }
// // };

// // above solution is brute force

// // This is stack solution (optimised)

// // first find next greater for each in second array
// // Bind that with its number later find it in first array with map

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     vector<int> nums2  = {1, 3, 4, 2};
//     vector<int> nums1  = {4, 1, 2};

//     stack<int> st;
//     unordered_map<int, int> mp;
//     for (int i = nums2.size() - 1; i >= 0; i--)
//     {
//         int element = nums2[i];
//         while (!st.empty() && st.top() <= element)
//         {
//             st.pop();
//         }
//         int result = -1;
//         if (!st.empty())
//         {
//             result = st.top();
//         }
//         mp.insert({element, result});
//         st.push(element);
//         // cout << result << " ";
//     }

//     vector<int> ans;
//     for (auto ele : nums1)
//     {
//         ans.push_back(mp[ele]);
//     }

//     for (auto I : ans)
//     {
//         cout << I << " ";
//     }
// }