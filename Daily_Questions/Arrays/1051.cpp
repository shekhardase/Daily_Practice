// https : // leetcode.com/problems/height-checker/description/?envType=daily-question&envId=2024-06-10

//         class Solution
// {
// public:
//     int heightChecker(vector<int> &heights)
//     {
//         vector<int> expected;
//         int count = 0;

//         for (int i = 0; i < heights.size(); i++)
//         {
//             expected.push_back(heights[i]);
//         }
//         for (int i = 0; i < heights.size(); i++)
//         {
//             cout << heights[i] << " ";
//         }

//         sort(expected.begin(), expected.end());
//         for (int i = 0; i < heights.size(); i++)
//         {
//             cout << heights[i] << " ";
//         }
//         for (int i = 0; i < heights.size(); i++)
//         {
//             if (heights[i] != expected[i])
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };