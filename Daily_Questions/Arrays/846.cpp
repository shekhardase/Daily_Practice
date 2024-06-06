// https://leetcode.com/problems/hand-of-straights/description/?envType=daily-question&envId=2024-06-06

// class Solution {
// public:
//     bool isNStraightHand(vector<int>& hand, int groupSize) {
//         if (hand.size() % groupSize != 0) {
//             return false;
//         }

//         // create map for freq

//         map<int, int> mp;
//         for (int i : hand) {
//             mp[i]++;
//         }

//         // iterating map

//         for (auto it = mp.begin(); it != mp.end(); it++) {

//            int element = it->first;
//             int freq = it->second;

//             if (freq > 0) {
//                 for (int i = 0; i < groupSize; i++) {
//                     if (mp[element + i] < freq) {
//                         return false;
//                     }
//                     mp[element + i] = mp[element + i] - freq;
//                 }
//             }
//         }
//         return true;
//     }
// };