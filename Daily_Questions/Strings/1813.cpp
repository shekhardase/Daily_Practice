// class Solution {
// public:
//     bool areSentencesSimilar(string s1, string s2) {
//         if (s1.length() < s2.length()) {
//             swap(s1, s2);
//         }
//         vector<string> v1;
//         vector<string> v2;
//         stringstream ss1(s1);
//         string token;
//         while (ss1 >> token) {
//             v1.push_back(token);
//         }
//         stringstream ss2(s2);

//         while (ss2 >> token) {
//             v2.push_back(token);
//         }

//         int i = 0, j = v1.size() - 1;
//         int k = 0, l = v2.size() - 1;

//         while (k < v2.size() && i < v1.size()  && v2[k] == v1[i]) {

//             k++;
//             i++;
//         }

//         while (l >= k && v2[l] == v1[j]) {
//             j--;
//             l--;
//         }

//         return l < k;
//     }
// };

// https://leetcode.com/problems/sentence-similarity-iii/?envType=daily-question&envId=2024-10-06