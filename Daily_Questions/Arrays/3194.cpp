// // https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/

// class Solution {
// public:
//     double minimumAverage(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         int start = 0;
//         int end = nums.size() - 1;
//         vector<double> averages;

//         while (start < end) {
//             double avg = (nums[start] + nums[end]) / 2.0;
//             averages.push_back(avg);
//             start++;
//             end--;
//         }

//         return *min_element(averages.begin(), averages.end());
//     }
// };