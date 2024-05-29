// // https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/?envType=daily-question&envId=2024-05-29

// class Solution {
// public:
//     void addOne(string& s) {
//         int i = s.length() - 1;
//         while (i >= 0 && s[i] != '0') {
//             s[i] = '0';
//             i--;
//         }
//         if (i < 0) {
//             s = '1' + s;
//         } else {
//             s[i] = '1';
//         }
//     }

//     int numSteps(string s) {
//         int op = 0;
//         while (s.length() > 1) {
//             int n = s.length();
//             if (s[n - 1] == '0') {
//                 s.pop_back();
//             } else {
//                 addOne(s);
//             }
//             op++;
//         }
//         return op;
//     }
// };