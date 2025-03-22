// https://leetcode.com/problems/special-array-ii/description/?envType=daily-question&envId=2025-03-22

// class Solution
// {
//     public:
//        	// bool calculate(vector<int>& nums, int start, int end) {
//        	//     for (int i = start; i <= end - 1; i++) {
//        	//         if (nums[i] % 2 == 0 && nums[i + 1] % 2 != 0 ||
//        	//             nums[i] % 2 != 0 && nums[i + 1] % 2 == 0) {
//        	//             continue;
//        	//         } else {
//        	//             return false;
//        	//         }
//        	//     }
//        	//     return true;
//        	// }

//         vector<bool> isArraySpecial(vector<int> &nums, vector<vector< int>> &queries)
//         {
//             int n = nums.size();
//             vector<bool> ans;
//             vector<int> prefix(n);

//             prefix[0] = 0;

//             for (int i = 1; i < nums.size(); i++)
//             {
//                 if (nums[i] % 2 == nums[i - 1] % 2)
//                 {
//                     prefix[i] = prefix[i - 1] + 1;
//                 }
//                 else
//                 {
//                     prefix[i] = prefix[i - 1];
//                 }
//             }

//             for (int i = 0; i < queries.size(); i++)
//             {
//                 int first = queries[i][0];
//                 int second = queries[i][1];

//                 if ((prefix[second] - prefix[first]) == 0)
//                 {
//                     ans.push_back(true);
//                 }
//                 else
//                 {
//                     ans.push_back(false);
//                 }
//             }
//             return ans;
//         }
// };