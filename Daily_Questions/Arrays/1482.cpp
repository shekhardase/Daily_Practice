// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/?envType=daily-question&envId=2024-06-19\

// #include <vector>
// #include <algorithm>

// class Solution {
// public:
//     int minDays(std::vector<int>& bloomDay, int m, int k) {
//         int n = bloomDay.size();
//         if (static_cast<long long>(m) * k > n) return -1;
// // Impossible to form m bouquets of k flowers

//         int minDay = *min_element(bloomDay.begin(), bloomDay.end());
//         int maxDay = *max_element(bloomDay.begin(), bloomDay.end());

//         int result = -1;
//         while (minDay <= maxDay) {
//             int midDay = minDay + (maxDay - minDay) / 2;
//             if (isValid(bloomDay, m, k, midDay)) {
//                 result = midDay;
//                 maxDay = midDay - 1; // Try to minimize the days
//             } else {
//                 minDay = midDay + 1;
//             }
//         }
//         return result;
//     }

// private:
//     bool isValid(const std::vector<int>& bloomDay, int m, int k, int midDay) {
//         int bouquets = 0;
//         int flowers = 0;
//         for (int i = 0; i < bloomDay.size(); ++i) {
//             if (bloomDay[i] <= midDay) {
//                 flowers++;
//                 if (flowers == k) {
//                     bouquets++;
//                     flowers = 0;
//                 }
//             } else {
//                 flowers = 0;
//             }
//         }
//         return bouquets >= m;
//     }
// };
