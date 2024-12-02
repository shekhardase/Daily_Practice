// https://leetcode.com/problems/check-if-n-and-its-double-exist/description/?envType=daily-question&envId=2024-12-01

// class Solution {
// public:
//     bool checkIfExist(vector<int>& arr) {
//         unordered_map<int, bool> mp;
//         for (auto i : arr) {
//             mp[i] = true;
//         }

//         for (auto i : mp) {
//             cout << i.first << " " << i.second << endl;
//         }

//         int zero = 0;
//         for (auto i : arr) {
//             if(i==0)
//             {
//                 zero++;
//             }
//             if(i * 2 == i && zero < 2)
//             {
//                 continue;
//             }

//             else
//              if (mp[i * 2] == true) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };