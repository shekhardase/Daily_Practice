// // https://leetcode.com/problems/single-number-iii/description/?envType=daily-question&envId=2024-05-31

// class Solution
// {
//     public:
//         vector<int> singleNumber(vector<int> &nums)
//         {

//             unordered_map<int, int> freq;
//             int ans = 0;
//             vector<int>temp;
//             for (int num: nums)
//             {
//                 freq[num]++;
//             }

//             vector<int> unique;
//             for (const auto &pair: freq)
//             {
//                 if (pair.second == 1)
//                 {
//                     ans = pair.first;
//                     temp.push_back(ans);
//                 }
//             }
//             return temp;
//         }
// };