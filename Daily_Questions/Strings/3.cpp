// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/?envType=problem-list-v2&envId=puee73lv&
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int> charIndex;
//         int left = 0, maxLength = 0;

//         for (int right = 0; right < s.size(); ++right) {
//             if (charIndex.find(s[right]) != charIndex.end()) {
//                 // Move the left pointer to the right of the last occurrence of the duplicate character
//                 left = max(left, charIndex[s[right]] + 1);
//             }
//             // Update the latest index of the character
//             charIndex[s[right]] = right;
//             // Calculate the length of the current window
//             maxLength = max(maxLength, right - left + 1);
//         }

//         return maxLength;
//     }
// };
