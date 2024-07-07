// https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07

// class Solution {
// public:
//     int numWaterBottles(int numBottles, int numExchange) {
//         int drink = 0;

//         while(numBottles >= numExchange)
//         {
//             drink += numExchange;

//             numBottles -= numExchange;

//             numBottles +=1;
//         }
//         return drink + numBottles;

//     }
// };