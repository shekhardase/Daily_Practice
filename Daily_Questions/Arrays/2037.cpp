// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/?envType=daily-question&envId=2024-06-13

// class Solution {
// public:
//     int minMovesToSeat(vector<int>& seats, vector<int>& students) {
//         sort(seats.begin(),seats.end());
//         sort(students.begin(),students.end());
//         int n = seats.size();
//         int count = 0;
//         for(int i = 0;i < n;i++)
//         {
//             int temp = abs(students[i] - seats[i]);
//             count = count + temp;
//         }

//         return count;
//     }
// };