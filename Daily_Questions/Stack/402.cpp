// https://leetcode.com/problems/remove-k-digits/description/?envType=daily-question&envId=2024-07-17

// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         stack<char> stack;
//         for (char digit : num) {
//             while (!stack.empty() && k > 0 && stack.top() > digit) {
//                 stack.pop();
//                 k--;
//             }
//             stack.push(digit);
//         }
//         while (k > 0 && !stack.empty()) {
//             stack.pop();
//             k--;
//         }
//         string str;

//         while (!stack.empty()) {
//             str += stack.top();
//             stack.pop();
//         }

//         reverse(str.begin(), str.end());
//         // Remove leading zeros
//         size_t pos = str.find_first_not_of('0');
//         str = (pos == std::string::npos) ? "0" : str.substr(pos);

//         return str;
//     }
// };