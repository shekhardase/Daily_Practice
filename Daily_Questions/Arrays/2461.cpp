// https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/?envType=daily-question&envId=2025-03-17

// class Solution {
//     public:
//         long long maximumSubarraySum(vector<int>& nums, int k) {
//             long long result = 0 ;
//             long long currentsum = 0;
//             unordered_set<int>st;
//             int i = 0 ;
//             int j = 0 ;
//             long long n = nums.size() ; 
//             while(j < n)
//             {
//                 // check if nums[j] is already present in window
    
//                 while(st.count(nums[j]))
//                 {
//                     currentsum -= nums[i];
//                     st.erase(nums[i]);
//                     i++;
//                 }
    
//                 currentsum += nums[j];
//                 st.insert(nums[j]);
    
//                 if(j-i+1 == k)
//                 {
//                     result = max(result , currentsum);
    
//                     currentsum -= nums[i];
//                     st.erase(nums[i]);
//                     i++;
//                 }
//                 j++;
//             }
//             return result;
//         }
//     };