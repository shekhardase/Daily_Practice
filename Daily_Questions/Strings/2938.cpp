// class Solution {
// public:
//     long long minimumSteps(string s) {
//         int n = s.length();
//         long long ones = 0;
//         long long count = 0;

//         for(int i = 0;i < n;i++)
//         {
//             if(s[i] == '0')
//             {
//                 count += ones;
//             }
//             else
//                 ones++;
//         }

//         return count;
//     }
// };
// https://leetcode.com/problems/separate-black-and-white-balls/description/?envType=daily-question&envId=2024-10-15