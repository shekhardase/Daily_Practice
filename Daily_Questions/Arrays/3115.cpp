// // https://leetcode.com/problems/maximum-prime-difference/description/

// class Solution
// {
// public:
//     bool isPrime(int n)
//     {
//         if (n <= 1)
//             return false;
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int maximumPrimeDifference(vector<int> &nums)
//     {
//         int firstPrimeIndex = -1;
//         int lastPrimeIndex = -1;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (isPrime(nums[i]))
//             {
//                 if (firstPrimeIndex == -1)
//                 {
//                     firstPrimeIndex = i;
//                 }
//                 lastPrimeIndex = i;
//             }
//         }

//         if (firstPrimeIndex == -1 || lastPrimeIndex == -1)
//         {
//             return 0; // If there are no prime numbers in the array
//         }

//         return lastPrimeIndex - firstPrimeIndex;
//     }
// };