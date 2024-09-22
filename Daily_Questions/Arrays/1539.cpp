// https://leetcode.com/problems/kth-missing-positive-number/description/
// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         int start = 0, end = n - 1;
//         int mid = -1;
//         while (start <= end) {
//             mid = start + (end - start) / 2;

//             int Missing = arr[mid] - (mid + 1);

//             if (Missing < k) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         return start + k;
//     }
// };