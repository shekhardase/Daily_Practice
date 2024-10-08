// https://leetcode.com/problems/permutation-in-string/?envType=daily-question&envId=2024-10-05

// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         if (s1.size() > s2.size()) {
//             return false;
//         }

//         unordered_map<char, int> mp1;
//         unordered_map<char, int> mp2;

//         for (int i = 0; i < s1.size(); i++) {
//             mp1[s1[i]]++;
//         }

//         for (auto i : mp1) {
//             cout << i.first << " " << i.second << endl;
//         }

//         for (int i = 0; i < s1.size(); i++) {
//             mp2[s2[i]]++;
//         }
//         if (mp1 == mp2) {
//             return true;
//         }

//         int i = 0 ;
//         int j = s1.size() ;

//         while(j < s2.size())
//         {
//             // mp2[i]++
//             mp2[s2[j]]++;
//             mp2[s2[i]]--;
//             if(mp2[s2[i]] == 0)
//             {
//                 mp2.erase(s2[i]);
//             }

//             if(mp1==mp2)
//             {
//                 return true;
//             }
//             i++;
//             j++;
//         }

//         return false;
//     }
// };