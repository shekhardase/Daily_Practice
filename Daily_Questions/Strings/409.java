// https://leetcode.com/problems/longest-palindrome/


// class Solution {
//     public int longestPalindrome(String s) {
//         int count = 0;
//         if (s.length() == 1) {
//             return 1;
//         } else {
//             Map<Character, Integer> freq = new HashMap<>();
//             for (char c : s.toCharArray()) {
//                 freq.put(c, freq.getOrDefault(c, 0) + 1);
//             }

//             boolean hasOdd = false; // To track if there's at least one character with an odd count
//             for (Map.Entry<Character, Integer> entry : freq.entrySet()) {
//                 if (entry.getValue() % 2 == 0) {
//                     count += entry.getValue();
//                 } else {
//                     count += entry.getValue() - 1; // Add the even part of the count
//                     hasOdd = true;
//                 }
//             }

//             if (hasOdd) {
//                 count += 1; // Add one center character if there's any odd count character
//             }

//             return count;
//         }
//     }}
