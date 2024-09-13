// https://leetcode.com/problems/xor-queries-of-a-subarray/description/?envType=daily-question&envId=2024-09-13

// class Solution {
// public:
//     vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//         int n = arr.size();
//         vector<int> cumXor(n, 0);

//         cumXor[0] = arr[0];
//         for (int i = 1; i < n; i++) {
//             cumXor[i] = cumXor[i - 1] ^ arr[i];
//         }

//         vector<int> result;

//         for (vector<int>& query : queries) {
//             int L = query[0];
//             int R = query[1];

//             int Xor_Val = cumXor[R] ^ (L == 0 ? 0 : cumXor[L - 1]);
//             result.push_back(Xor_Val);
//         }
//         return result;
//     }
// };

// // for (auto& inner_vector : vect2) {
// //      // inner_vector is reference to element of vect2
// //      for (auto& element : inner_vector) {
// //           // element is reference to element of inner vector
// //      }
// // }