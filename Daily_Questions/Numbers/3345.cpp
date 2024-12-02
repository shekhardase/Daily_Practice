// // https://leetcode.com/problems/smallest-divisible-digit-product-i/submissions/1467946592/

// // class Solution
// // {
// //     public:
// //         int product(int n)
// //         {
// //             int product = 1;
// //             while(n>0)
// //             {
// //                 product = product * (n%10);
// //                 n = n/10;
// //             }
// //             return product;
// //         }

// //     int smallestNumber(int n, int t)
// //     {
// //         cout<<product(n)<<endl;
// //         while (product(n) % t != 0)
// //         {
// //             n++;
// //         }
// //         return n;
// //     }
// // };

// class Solution
// {
//     public:
//         int product(int n)
//         {
//             int product = 1;
//             while(n>0)
//             {
//                 product*= n%10;
//                 n = n/10;
//             }
//             return product;
//         }

//     int smallestNumber(int n, int t)
//     {
//         cout<<product(n)<<endl;
//         while (product(n) % t != 0)
//         {
//             n++;
//         }
//         return n;
//     }
// // }