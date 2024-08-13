// https://leetcode.com/problems/combination-sum-ii/description/
// class Solution
// {
//     public:
//         vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
//         {
//             sort(candidates.begin(), candidates.end());	// Sort the array to handle duplicates

//             vector<vector < int>> ans;	// To store all valid combinations
//             vector<int> temp;	// Temporary vector to store the current combination
//             findCombination(0, target, candidates, ans, temp);	// Start finding combinations
//             return ans;	// Return the list of all valid combinations
//         }

//     private:
//         void findCombination(int index, int target, vector<int> &candidates, vector<vector< int >> &ans, vector< int > &temp)
//         {
//            	// If the target is met, add the current combination to the answer list
//             if (target == 0)
//             {
//                 ans.push_back(temp);
//                 return;
//             }

//            	// Iterate over the candidates starting from the current index
//             for (int i = index; i < candidates.size(); i++)
//             {
//                	// Skip duplicates
//                 if (i > index && candidates[i] == candidates[i - 1])
//                 {
//                     continue;
//                 }

//                	// If the candidate is greater than the remaining target, break the loop
//                 if (candidates[i] > target)
//                 {
//                     break;
//                 }

//                	// Include the candidate in the current combination
//                 temp.push_back(candidates[i]);

//                	// Recurse to find the next elements of the combination
//                 findCombination(i + 1, target - candidates[i], candidates, ans, temp);

//                	// Backtrack: remove the last element added to try other combinations
//                 temp.pop_back();
//             }
//         }
// };