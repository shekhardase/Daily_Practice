// class Solution {
// public:
//     int smallestChair(vector<vector<int>>& times, int targetFriend) {
//         int targetArrival = times[targetFriend][0];
//         int n = times.size();
//         sort(times.begin(), times.end());
//         vector<int>chair(n , -1);
//         for (vector<int>& time : times) {
//             int arrival = time[0];
//             int depart = time[1];

//             for(int i = 0 ; i < n ; i ++)
//             {
//                 if(chair[i]<=arrival)
//                 {
//                     chair[i] = depart;

//                     if(arrival == targetArrival)
//                     {
//                         return i ;
//                     }
//                     break;
//                 }
//             }
//         }
//         return -1;
//     }
// };
// https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/?envType=daily-question&envId=2024-10-11

// brute force solution
// using extra vector chair with -1 intialization

// checking available space each time for new coming friend