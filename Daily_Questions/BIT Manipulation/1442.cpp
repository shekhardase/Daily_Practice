// // https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/description/

// class Solution
// {
// public:
//     int countTriplets(vector<int> &arr)
//     {
//         int n = arr.size();
//         int pairs = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 int a = 0;
//                 for (int k = i; k < j; k++)
//                 {
//                     a = a ^ arr[k];
//                 }

//                 int b = 0;

//                 for (int k = j; k < n; k++)
//                 {
//                     b = b ^ arr[k];
//                     if (a == b)
//                     {
//                         pairs++;
//                     }
//                 }
//             }
//         }
//         return pairs;
//     }
// };