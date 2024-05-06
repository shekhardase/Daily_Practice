// // https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/


// class Solution
// {
//     public:

//         void solve(int num, int &temp)
//         {
//             if (num == 0) return;
//             temp++;
//             solve(num / 10, temp);
//         }

//     int findNumbers(vector<int> &nums)
//     {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int num = nums[i], temp = 0;
//             solve(num, temp);
//             if (temp % 2 == 0) count++;
//         }
//         return count;
//     }
// };