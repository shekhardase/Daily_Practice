
// https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/?envType=daily-question&envId=2025-03-14

// class Solution {
//     public:
    
//         bool isvalid(vector<int>& candies , long long k , int cand )
//         {
//             long long possible = 0;
//             for(int& i : candies)
//             {
//                 possible = possible + i / cand;
//             }
//             return possible>= k;
//         }
    
//         int maximumCandies(vector<int>& candies, long long k) {
//             // function to find if fix number is valid for k 
//             int start = 1;
//             int ans = 0;
//             int end = *max_element(candies.begin() , candies.end());
    
//              while (start <= end) {
//                 int cand = start + (end - start) / 2;
//                 if (isvalid(candies,k, cand)) {
//                     ans  = cand;
//                     start = cand + 1;
                    
//                 } else {
//                     end = cand - 1;
//                 }
//             }
//             return ans;
    
//         }
//     };