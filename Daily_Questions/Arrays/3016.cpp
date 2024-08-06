// https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/?envType=daily-question&envId=2024-08-06

// class Solution
// {
//     public:
//         int minimumPushes(string word)
//         {
//             vector<int> mp(26, 0);
//             for (char &ch: word)
//                 mp[ch - 'a']++;	//Mentioned in qn, all letters will be distinct

//             sort(begin(mp), end(mp), greater<int> ());	//descending order of frequency

//             int ans = 0;
//             for (int i = 0; i < 26; i++)
//             {
//                 ans += mp[i] *((i / 8) + 1);
//             }
//             return ans;
//         }
// };