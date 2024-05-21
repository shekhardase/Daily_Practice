// // https://leetcode.com/problems/subsets/submissions/1263710602/?envType=daily-question&envId=2024-05-21

// class Solution {

// private:
// void solve(vector<int>nums , vector<int> output , int index , vector<vector<int>>& ans )
// {
//     //base case
//     if(index >= nums.size())
//     {   ans.push_back(output);    //end karne se pehle hume include ki values mil chuki hai output mai
//         return ;                 // so return karne se pehle wo push karenge
//     }

//     //exclude
//     solve(nums, output , index+1 , ans);       //exclude mai kuch nhi karna but age jana hai so increment index

//     //include         //include mai element jisme index hai wo chiye
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output , index+1 , ans);

// }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> output;     //divide wala isme store karenge
//         int index= 0 ;
//         solve(nums , output , index,ans );
//     //    nums=array  output = divide_wala_part  index=i  ans=final ans jo ans vec mai jaega

//         return ans ;
//     }
// };