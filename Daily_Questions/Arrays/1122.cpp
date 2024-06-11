// // https://leetcode.com/problems/relative-sort-array/description/?envType=daily-question&envId=2024-06-11

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// class Solution
// {
// public:
//     std::vector<int> relativeSortArray(std::vector<int> &arr1, std::vector<int> &arr2)
//     {
//         std::unordered_map<int, int> countMap;
//         for (int num : arr1)
//         {
//             countMap[num]++;
//         }

//         std::vector<int> result;

//         // Add elements of arr1 according to the order in arr2
//         for (int num : arr2)
//         {
//             while (countMap[num] > 0)
//             {
//                 result.push_back(num);
//                 countMap[num]--;
//             }
//         }

//         // Add remaining elements that are not in arr2
//         std::vector<int> remaining;
//         for (const auto &pair : countMap)
//         {
//             while (pair.second > 0)
//             {
//                 remaining.push_back(pair.first);
//                 countMap[pair.first]--;
//             }
//         }

//         // Sort the remaining elements
//         std::sort(remaining.begin(), remaining.end());

//         // Add sorted remaining elements to result
//         result.insert(result.end(), remaining.begin(), remaining.end());

//         return result;
//     }
// };
