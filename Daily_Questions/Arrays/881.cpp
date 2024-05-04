// // // https://leetcode.com/problems/boats-to-save-people/description/?envType=daily-question&envId=2024-05-04
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     vector<int> pep = {1,2};
// //     int limit = 3;
// //     int count = 0;
// //     sort(pep.begin(), pep.end());

// //     for (int i = 0; i < pep.size(); i++)
// //     {
// //         cout << pep[i] << " ";
// //     }

// //     // 3 3 4 5

// //     int start = 0;
// //     int end = pep.size() - 1;

// //     while (start < end)
// //     {
// //         if (pep[start] + pep[end] <= limit)
// //         {
// //             count++;
// //         }

// //         else if (pep[start] <= limit)
// //         {
// //             count++;
// //         }
// //         if (pep[end] <= limit)
// //         {
// //             count++;
// //         }

// //         start++;
// //         end--;
// //     }
// //     cout << endl;

// //     cout << count;
// //     return 0;
// // }



// class Solution
// {
//     public:
//         int numRescueBoats(vector<int> &people, int limit)
//         {
//             int n = people.size();
//             sort(people.begin(), people.end());
//             int count = 0;
//             int i = 0;
//             int j = n - 1;
//             while (i <= j)
//             {
//                 if (people[j] == limit)
//                 {
//                     count++;
//                     j--;
//                 }
//                 else if (people[i] + people[j] <= limit)
//                 {
//                     count++;
//                     i++;
//                     j--;
//                 }
//                 else if (people[i] + people[j] > limit)
//                 {
//                     count++;
//                     j--;
//                 }
//             }
//             return count;
//         }
// };