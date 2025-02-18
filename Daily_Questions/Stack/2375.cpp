// https://leetcode.com/problems/construct-smallest-number-from-di-string/description/?envType=daily-question&envId=2025-02-18


// class Solution
// {
//     public:
//         string smallestNumber(string pattern)
//         {
//             string ans;
//             stack<int> nums;
//             int n = pattern.size();

//             for (int i = 0; i <= n; i++)
//             {
//                 nums.push(i + 1);

//                 if (i == n || pattern[i] == 'I')
//                 {
//                     while (!nums.empty())
//                     {
//                         ans += to_string(nums.top());
//                         nums.pop();
//                     }
//                 }
//             }
//             return ans;
//         }
// };