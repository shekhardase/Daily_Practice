// // https://leetcode.com/problems/jewels-and-stones/description/


// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int numJel = jewels.size();
//         int numstonr = stones.size();

//         int count = 0 ;

//         for(int i= 0 ;  i < numstonr ; i++)
//         {
//             for(int j = 0 ; j < numJel ; j++)
//             {
//                 if(stones[i] == jewels[j])
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }
//         return count ; 
//     }
// };