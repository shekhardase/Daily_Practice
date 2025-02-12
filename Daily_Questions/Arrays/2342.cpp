// https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/?envType=daily-question&envId=2025-02-12


// class Solution {
//     public:
//         int digitSum(int num) {
//             int sum = 0;
//             while (num) {
//                 sum += num % 10;
//                 num /= 10;
//             }
//             return sum;
//         }
    
//         int maximumSum(vector<int>& nums) {
//             unordered_map<int, int> maxNum;
//             int maxSum = -1;
    
//             for (int num : nums) {
//                 int sum = digitSum(num);
    
//                 if (maxNum.count(sum)) {
//                     maxSum = max(maxSum, maxNum[sum] + num);
//                 }
    
//                 maxNum[sum] = max(maxNum[sum], num);
//             }
    
//             return maxSum;
//         }
//     };
    