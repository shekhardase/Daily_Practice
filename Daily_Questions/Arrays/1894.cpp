// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/description/?envType=daily-question&envId=2024-09-02
// class Solution {
// public:
//     int chalkReplacer(vector<int>& chalk, int k) {

//         long long total = 0;
//         for (int i = 0; i < chalk.size(); i++) {
//             total = total + chalk[i];
//         }

//         int remain = k%total;
//         for(int i = 0 ; i < chalk.size() ; i++)
//         {
//             remain = remain - chalk[i];
//             if(remain<0)
//             {
//                 return i;
//             }
//         }
//         return 0 ;

//     }
// };