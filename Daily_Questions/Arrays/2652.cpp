// https://leetcode.com/problems/sum-multiples/description/
// class Solution {
// public:
//     int sumOfMultiples(int n) {
//         vector<int>temp;

//         for(int i = 1 ; i <= n ; i++)
//         {
//             if((i % 3 ==0) || (i % 5 ==0) || (i % 7 == 0))
//             {
//                 temp.push_back(i);
//             }
//         }
// int sum = 0 ;
//         for(int i = 0 ; i < temp.size() ; i++)
//         {
// sum = sum+ temp[i];
//         }
//         return sum;
//     }
// };