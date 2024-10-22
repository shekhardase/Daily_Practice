// https://leetcode.com/problems/maximum-swap/description/?envType=daily-question&envId=2024-10-17
// class Solution {
// public:
//     int maximumSwap(int num) {
//         string str = to_string(num);
//         int n = str.length();
//         vector<int> maxRight(n);

//         maxRight[n - 1] = n - 1;
//         for (int i = n - 2; i >= 0; i--) {
//             int rightMaxIndex = maxRight[i + 1];
//             int rightMaxElement = str[rightMaxIndex];

//             if (str[i] > rightMaxElement) {
//                 maxRight[i] = i;
//             } else {
//                 maxRight[i] = rightMaxIndex;
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             int maxRightIndex = maxRight[i];
//             int maxRightElement = str[maxRightIndex];
//             if (str[i] < maxRightElement) {
//                 swap(str[i], str[maxRightIndex]);
//                 return stoi(str);
//             }
//         }
//         return num;
//     }
// };