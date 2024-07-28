// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1336101654/

// class Solution
// {
//     public:
//         vector<int> twoSum(vector<int> &numbers, int target)
//         {
//             int start = 0;
//             int end = numbers.size() - 1;
//             // vector<int> nums;

//             while (start < end)
//             {
//                int total = numbers[start] + numbers[end];

//                if(total == target)
//                {
//                 return {start+1 , end +1};
//                }
//                else if(total > target)
//                {
//                 end -- ;
//                }
//                else{
//                 start++;
//                }
//             }
//             return {-1 , -1};
//         }
// };