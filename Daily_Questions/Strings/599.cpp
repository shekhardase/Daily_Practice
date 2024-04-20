// // https://leetcode.com/problems/minimum-index-sum-of-two-lists/description/

// class Solution
// {
// public:
//     vector<string> findRestaurant(vector<string> &list1,
//                                   vector<string> &list2)
//     {
//         int minIndexSum = INT_MAX;
//         vector<string> result;

//         // Iterate through each string in list1
//         for (int i = 0; i < list1.size(); ++i)
//         {
//             // Iterate through each string in list2
//             for (int j = 0; j < list2.size(); ++j)
//             {
//                 // If a common string is found
//                 if (list1[i] == list2[j])
//                 {
//                     int indexSum = i + j;
//                     // If index sum is smaller than current minimum
//                     if (indexSum < minIndexSum)
//                     {
//                         minIndexSum = indexSum;
//                         result.clear();
//                         result.push_back(list1[i]);
//                     }
//                     // If index sum is equal to current minimum
//                     else if (indexSum == minIndexSum)
//                     {
//                         result.push_back(list1[i]);
//                     }
//                     break; // Move to next string in list1
//                 }
//             }
//         }

//         return result;
//     }
// };