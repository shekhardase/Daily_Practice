// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/

// class Solution
// {
//     public:
//         vector<int> findArray(vector<int> &pref)
//         {
//             vector<int> v;
//             v.push_back(pref[0]);
//             for (int i = 1; i < pref.size(); i++)
//             {
//                 v.push_back(pref[i] ^ pref[i - 1]);
//             }
//             return v;
//         }
// };