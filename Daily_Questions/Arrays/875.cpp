// class Solution {
// public:
//     bool canEatAll(vector<int>& piles, int speed, int h) {
//         int hoursCounted = 0;
//         for (int& x : piles) {
//             hoursCounted += (x / speed);
//             if (x % speed != 0) {
//                 hoursCounted++;
//             }
//         }
//         return hoursCounted <= h;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low = 1;
//         int high = *max_element(begin(piles), end(piles));

//         // int speed = (high - low) / 2;

//         while (low < high) {
//             int speed =  low + (high - low) / 2;
//             if (canEatAll(piles, speed, h)) {
//                 high = speed;
//             } else {
//                 low = speed + 1;
//             }
//         }
//         return low;
//     }
// };