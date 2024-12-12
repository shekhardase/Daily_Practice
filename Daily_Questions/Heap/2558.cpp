// https://leetcode.com/problems/take-gifts-from-the-richest-pile/submissions/1476759168/?envType=daily-question&envId=2024-12-12

// class Solution {
// public:
//     long long pickGifts(vector<int>& gifts, int k) {
//         priority_queue<int> pq;
//         for (int i = 0; i < gifts.size(); i++) {
//             pq.push(gifts[i]);
//         }

//         while (k--) {
//             double number = pq.top();
//             double sqrtValue = sqrt(number);
//             int floorValue = floor(sqrtValue);
//             pq.pop();
//             pq.push(floorValue);
//         }
//             long long sum = 0;

//         while(!pq.empty())
//         {
//             sum+=pq.top();
//             pq.pop();
//         }

//         return sum;
//     }

// };