// https://leetcode.com/problems/move-pieces-to-obtain-a-string/submissions/1471920894/?envType=daily-question&envId=2024-12-05


// class Solution {
// public:
//     bool canChange(string start, string target) {
//         int i = 0;
//         int j = 0;
//         int n = start.size();

//         while (i < n || j < n) {
//             while (i < n && start[i] == '_') {
//                 i++;
//             }
//             while (j < n && target[j] == '_') {
//                 j++;
//             }

//             if (i == n || j == n) {
//                 return i == n && j == n;
//             }

//             if (start[i] != target[j]) {
//                 return false;
//             }

//             if (start[i] == 'L' && i < j) {
//                 return false;
//             }

//               if (start[i] == 'R' && i > j) {
//                 return false;
//             }
//             i++;
//             j++;
//         }

//         return true;
//     }
// };