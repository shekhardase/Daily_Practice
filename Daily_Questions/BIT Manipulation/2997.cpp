// // https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/?envType=daily-question&envId=2024-04-29


// class Solution
// {
//     public:
//         int minOperations(vector<int> &nums, int k)
//         {
//             int n = nums.size();
//             int finalXOR = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 finalXOR = finalXOR ^ nums[i];

//                 for (int j = 0; j < n; j++)
//                 {
//                     cout << finalXOR << " ";
//                 }
//                 cout << endl;
//             }
//             int count = 0;
//             while (k || finalXOR)
//             {
//                 if (k == finalXOR)
//                     return count;

//                 if ((k & 1) != (finalXOR & 1))
//                     count++;

//                 k = k >> 1;
//                 finalXOR = finalXOR >> 1;
//             }

//             return count;
//         }
// };