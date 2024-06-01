// class Solution {

//     public int scoreOfString(String s) {
//         int ans = 0;
//         for (int i = 1; i < s.length(); i++) {
//             int currentDigit = Character.getNumericValue(s.charAt(i));
//             int previousDigit = Character.getNumericValue(s.charAt(i - 1));
//             ans += Math.abs(currentDigit - previousDigit);
//         }
//         return ans;
//     }
// }https://leetcode.com/problems/score-of-a-string/submissions/1273839783/?envType=daily-question&envId=2024-06-01