// https://leetcode.com/problems/sort-the-jumbled-numbers/?envType=daily-question&envId=2024-07-24

// class Solution {
// public:
//     string getMappedNum(string& num, vector<int>& mapping) {
//         string mappedNum = "";
//         for (int i = 0; i < num.length(); i++) {
//             char ch = num[i];
//             int index = ch - '0';
//             mappedNum += to_string(mapping[index]);
//         }
//         cout << mappedNum << " ";
//         return mappedNum;
//     }

//     vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
//         int n = nums.size();

//         vector<pair<int, int>> vec;
//         cout << endl;
//         for (int i = 0; i < n; i++) {
//             string numStr = to_string(nums[i]);
//             string mappedStr = getMappedNum(numStr, mapping);
//             int mappedNum = stoi(mappedStr);
//             // cout << mappedNum << " ";
//             vec.push_back({mappedNum, i});
//         }
//         sort(begin(vec), end(vec));
//         vector<int> result;

//         for (auto i : vec) {
//             int originalNumIndex = i.second;
//             result.push_back(nums[originalNumIndex]);
//         }
//         return result;
//     }
// };