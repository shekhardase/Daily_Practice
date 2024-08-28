// class Solution {
// public:
//     double myPow(double x, int n) {
//         // If n is 0, return 1 (x^0 = 1)
//         if (n == 0) return 1.0;

//         // Convert n to long long to avoid overflow issues when n = INT_MIN
//         long long N = n;

//         // Handle negative exponents by inverting the base and making the exponent positive
//         if (N < 0) {
//             x = 1 / x;
//             N = -N;
//         }

//         double half = myPow(x, N / 2);  // Recursively calculate x^(N/2)

//         if (N % 2 == 0) {
//             // If N is even, result is half * half
//             return half * half;
//         } else {
//             // If N is odd, result is x * half * half
//             return x * half * half;
//         }
//     }
// };
// https://leetcode.com/problems/powx-n/