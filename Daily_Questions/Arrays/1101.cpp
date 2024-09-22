// class Solution {
// public:
//     int funct(vector<int>& weights, int& capacity) {
//         int daygot = 1;
//         int limit = 0;
//         for (int i = 0; i < weights.size(); i++) {
//             limit += weights[i];
//             if (limit > capacity) {
//                 daygot++;
//                 limit = weights[i];
//             }
//         }
//         return daygot;
//     }

//     int shipWithinDays(vector<int>& weights, int days) {
//         int maxi = *max_element(weights.begin(), weights.end());

//         int sum = 0;
//         for (auto i : weights) {
//             sum += i;
//         }

//         int low = maxi;
//         int high = sum;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (funct(weights, mid) <= days) {
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }

//         return low;
//     }
// };https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/