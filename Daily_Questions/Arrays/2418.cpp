// // class Solution {
// // public:
// //     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
// //         int n = heights.size();

// //         map<int  , string > mp;

// //         for(int i = 0 ; i < n ; i++)
// //         {
// //             mp[heights[i]] = names[i];
// //         }

// //         sort(heights.rbegin() , heights.rend());

// //         for(int i = 0 ; i < n ; i++)
// //         {
// //             names[i] = mp[heights[i]];
// //         }
// //         return names;
// //     }
// // };
// https://leetcode.com/problems/sort-the-people/?envType=daily-question&envId=2024-07-22