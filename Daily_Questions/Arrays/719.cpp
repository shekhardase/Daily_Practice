// https://leetcode.com/problems/find-k-th-smallest-pair-distance/?envType=daily-question&envId=2024-08-14

// class Solution
// {
//     public:
//         int smallestDistancePair(vector<int> &nums, int k)
//         {
//             int n = nums.size();
//             int maxEl = *max_element(begin(nums), end(nums));
//             vector<int> vec(maxEl + 1, 0);

//            	// for each distance d, how many pairs are there
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = i + 1; j < n; j++)
//                 {
//                     int d = abs(nums[i] - nums[j]);
//                     vec[d]++;
//                 }
//             }

//             for (int d = 0; d < maxEl + 1; d++)
//             {
//                 k = k - vec[d];
//                 if (k <= 0)
//                 {
//                     return d;
//                 }
//             }
//             return -1;
//         }
// };