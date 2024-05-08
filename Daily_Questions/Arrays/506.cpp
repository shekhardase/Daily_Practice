
// https://leetcode.com/problems/relative-ranks/description/?envType=daily-question&envId=2024-05-08
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <functional>

// using namespace std;

// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         vector<string> ans(score.size());
//         vector<pair<int, int>> scoreWithIndex(score.size());

//         for (int i = 0; i < score.size(); ++i) {
//             scoreWithIndex[i] = {score[i], i};
//         }

//         sort(scoreWithIndex.begin(), scoreWithIndex.end(), greater<pair<int, int>>());

//         for (int i = 0; i < scoreWithIndex.size(); ++i) {
//             int index = scoreWithIndex[i].second;
//             if (i == 0) {
//                 ans[index] = "Gold Medal";
//             } else if (i == 1) {
//                 ans[index] = "Silver Medal";
//             } else if (i == 2) {
//                 ans[index] = "Bronze Medal";
//             } else {
//                 ans[index] = to_string(i + 1);
//             }
//         }

//         return ans;
//     }
// };
