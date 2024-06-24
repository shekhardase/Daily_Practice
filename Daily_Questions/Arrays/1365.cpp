// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

// class Solution
// {
//     public:
//         vector<int> smallerNumbersThanCurrent(vector<int> &nums)
//         {
//             int count = 0;
//             vector<int> temp;
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 for (int j = 0; j < nums.size(); j++)
//                 {
//                     if (i != j)
//                     {
//                         if (nums[i] > nums[j])
//                         {
//                             count++;
//                         }
//                     }
//                 }
//                 temp.push_back(count);
//                 count = 0;
//             }
//             return temp;
//         }
// };