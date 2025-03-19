// https://leetcode.com/problems/fruit-into-baskets/description/

// class Solution {
//     public:
//         int totalFruit(vector<int>& fruits) {
//             int i = 0;
//             int j = 0;
//             int ans =0 ;
//             int n = fruits.size();
//             unordered_map<int, int> mp;
    
//             while (j < n) {
//                 mp[fruits[j]]++;
//                 while (mp.size() > 2) {
//                     mp[fruits[i]]--;
//                     if(mp[fruits[i]] == 0)
//                     {
//                         mp.erase(fruits[i]);
//                     }
//                     i++;
//                 }
//                 ans = max(ans , j - i + 1);
//                 j++;
//             }
//             return ans;
//         }
        
//     };