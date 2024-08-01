// https://leetcode.com/problems/number-of-senior-citizens/submissions/1340699180/?envType=daily-question&envId=2024-08-01
// class Solution {
// public:
//     int countSeniors(vector<string>& details) {
//         int count = 0 ;
//         for(auto &o : details)
//         {
//             int age = stoi(o.substr(11,2));
//             count+=age > 60;
//         }
//         return count;

//     }
// };