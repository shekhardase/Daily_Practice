// // https://leetcode.com/problems/fizz-buzz/description/
// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//         vector<string> ans;

//         // Iterate from 1 to n
//         for (int i = 1; i <= n; i++) {
//             // Check if i is divisible by both 3 and 5
//             if (i % 3 == 0 && i % 5 == 0) {
//                 ans.push_back("FizzBuzz");
//             }
//             // Check if i is divisible by 3
//             else if (i % 3 == 0) {
//                 ans.push_back("Fizz");
//             }
//             // Check if i is divisible by 5
//             else if (i % 5 == 0) {
//                 ans.push_back("Buzz");
//             }
//             // If none of the above conditions are met, convert i to string and add it to the vector
//             else {
//                 ans.push_back(to_string(i));
//             }
//         }

//         return ans;
//     }
// };