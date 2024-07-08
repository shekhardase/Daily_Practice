// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/?envType=daily-question&envId=2024-07-08

// class Solution
// {
//     public:
//         int findTheWinner(int n, int k)
//         {
//             vector<int> arr;

//             for (int i = 1; i <= n; i++)
//             {
//                 arr.push_back(i);
//             }

//             int i = 0;

//             while (arr.size() > 1)
//             {
//                 int index = (i + k - 1) % arr.size();	//  index to remove player
//                 arr.erase(arr.begin() + index);
//                 i = index;
//             }
//             return arr[0];
//         }
// };