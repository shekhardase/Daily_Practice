// https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-17

// class Solution {
//     public:
//         bool divideArray(vector<int>& nums) {
//             unordered_map<int,int> mp;
//             for(auto i : nums)
//             {
//                 mp[i]++;
//             }
    
    
//             for(auto i : mp)
//             {
//                if(i.second %2 !=0)
//                {
//                 return false;
//                }
//             }
//             return true;
//         }
//     };