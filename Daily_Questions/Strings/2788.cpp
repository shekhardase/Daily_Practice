// // https://leetcode.com/problems/split-strings-by-separator/description/

// class Solution {
// public:
//     vector<string> splitWordsBySeparator(vector<string>& words,
//                                          char separator) {
//         vector<string> res;
//         for (auto& w : words) {
//             int last = 0;
//             for (int i = 0; i <= w.size(); ++i) {
//                 if (i == w.size() || w[i] == separator) {
//                     if (i != last)
//                         res.push_back(w.substr(last, i - last));
//                     last = i + 1;
//                 }
//             }
//         }
//         return res;
//     }
// };