// https://leetcode.com/problems/combination-sum/description/class Solution
// {
//     public:

//         void findcombinations(int index, int target, vector<int> &candidates, vector<vector< int >> &ans, vector< int > &temp)
//         {
//             if (index == candidates.size())
//             {
//                 if (target == 0)
//                 {
//                     ans.push_back(temp);
//                 }
//                 return;
//             }

//            	// pick up elements
//             if (candidates[index] <= target)
//             {
//                 temp.push_back(candidates[index]);
//                 findcombinations(index, target - candidates[index], candidates, ans, temp);
//                 temp.pop_back(); // drop candidate  for next combination
//             }

//             // increase index to find next combination
//             findcombinations(index + 1, target, candidates, ans, temp);
//         }

//     vector<vector < int>> combinationSum(vector<int> &candidates, int target)
//     {
//         vector<vector < int>> ans;
//         vector<int> temp;
//         findcombinations(0, target, candidates, ans, temp);
//         return ans;
//     }
// };
// /