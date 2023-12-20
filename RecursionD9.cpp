// Permutations question leetcode

// class Solution {

//     private:
//     void solve(vector<vector<int>>& ans ,vector<int>& nums , int index )
//     {
//         if(index>=nums.size())
//         {
//             ans.push_back(nums);  
//             return ;       //ans vector mai chote chote nums vector jaenge
//         }

//         for(int i= index ; i<nums.size() ; i++)
//         {
//             swap(nums[index] , nums[i]);
//             solve(ans , nums, index+1);         //till her we solve for 1 now with recursive call it 
//                                                  //    will continue for other element of vector

//             //backtrack  this will netrualize the element of vector so that for next recursive call 
//             // the element should be same as before creating permutation

//             swap(nums[index] , nums[i]);
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans ;
//         int index = 0 ;
//         solve(ans , nums , index);
//         return ans;
//     }
// };