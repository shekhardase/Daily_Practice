// // https://leetcode.com/problems/fibonacci-number/description/


// // well ik fibo series and ive solved using recursion 
// // but i find this method quite interesting/

// class Solution {
// public:
//     int fib(int n) {
//         if(n==0)
//         {
//             return 0 ;
//         }

//         if(n==1 || n==2)
//         {
//             return 1 ;
//         }

//         int t1 = 0;
//         int t2 = 1;

//         for(int i = 2 ; i <=n ; i++)
//         {
//             int tn = t1+t2;
//             t1 = t2 ;
//             t2 = tn;
//         }

//         return t2;
//     }
// };