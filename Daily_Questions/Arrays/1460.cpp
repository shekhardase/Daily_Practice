// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/?envType=daily-question&envId=2024-08-03
// class Solution {
// public:
//     bool canBeEqual(vector<int>& target, vector<int>& arr) {
//         sort(target.begin() , target.end());
//         sort(arr.begin() , arr.end());

//         for(int i = 0 ; i < arr.size() ; i++)
//         {
//             if(arr[i] != target[i])
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };