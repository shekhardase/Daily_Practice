// https://leetcode.com/problems/sum-of-number-and-its-reverse/submissions/1387456472/
// class Solution {
// public:

//     int rev(int num)
//     {
//         int RevNum = 0 ;
//         while(num)
//         {
//             RevNum = RevNum*10+ num%10;
//             num = num/10;
//         }
//         return RevNum;
//     }

//     bool sumOfNumberAndReverse(int num) {
//         for(int i = 0 ; i <= num; i++)
//         {
//             if(i + rev(i) == num)
//             {
//                 cout<<i<<" "<<rev(i)<<endl;
//                 return true;
//             }
//         }
//         return false;
//     }
// };