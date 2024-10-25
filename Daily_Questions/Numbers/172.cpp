// https://leetcode.com/problems/factorial-trailing-zeroes/

// class Solution {
// public:
//     int trailingZeroes(int n) {
//         int res = 0;        // counting zeros
//         while (n) {          // while n is not zero
//             n = n / 5;       // dividing by 5  // finding multiple of 5 within that range
//             res = res + n;   // if 100 / 5 there 50 multiples within that range
//         }
//         return res;
//     }
// };