// //
// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

// class Solution {

// public int appendCharacters(String s, String t) {
// int i = 0;
// int longestPrefix = 0;

// while (i < s.length() && longestPrefix < t.length()) {
// if (s.charAt(i) == t.charAt(longestPrefix)) {
// longestPrefix++;
// }
// i++;
// }
// return t.length() - longestPrefix;

// }
// }
