// https://leetcode.com/problems/find-the-integer-added-to-array-ii/description/

// class Solution {
//     private:
//     bool ispossible(vector<int> nums1,vector<int> nums2)
//     {
//         int i = 0;
//         int j = 0;
//         int steps = 2;
//         while(i < nums1.size() && j < nums2.size())
//         {
//             if(nums1[i] == nums2[j])
//             {
//                 i++;
//                 j++;
//             }
//             else{
//                 i++;
//                 steps--;
//                 if(steps < 0)
//                     return false;
//             }
//         }
//         return j == nums2.size() && (i - j) <= 2;
//     }
// public:
//     int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
//           sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         unordered_map<int,int> counts;
//         int minadded = INT_MAX;
        
//         for(int i = 0;i < nums1.size();i++)
//         {
//             for(int j = 0;j < nums2.size();j++)
//             {
//                 int diff = nums2[j] - nums1[i];
//                 counts[diff]++;
//             }
//         }
        
//         for(auto& [diff,count] : counts)
//         {
//             vector<int>current(nums1.size());
//             for(int i = 0;i < nums1.size();i++)
//             {
//                 current[i] = nums1[i] + diff;
//             }
//             sort(current.begin(),current.end());
//             if(ispossible(current,nums2)){
//                 minadded = min(minadded,diff);
//             }
//         }
//         return minadded;
//     }
    
// };