// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=daily-question&envId=2025-03-11


// class Solution {
//     public:
//         int numberOfSubstrings(string s) {
//             int a = 0;
//             int b = 0;
//             int c = 0;
//             int count = 0;
    
//             int j = 0;
//             int n = s.size();
//             for (int i = 0; i < n; i++) {
//                 if (s[i] == 'a') {
//                     a++;
//                 }
//                 if (s[i] == 'b') {
//                     b++;
//                 }
//                 if (s[i] == 'c') {
//                     c++;
//                 }
    
//                 while (a > 0 && b > 0 && c > 0) {
//                     count = count + n - i;
//                     cout << count << " ";
//                     if (s[j] == 'a') {
//                         a--;
//                     }
//                     if (s[j] == 'b') {
//                         b--;
//                     }
//                     if (s[j] == 'c') {
//                         c--;
//                     }
//                     j++;
//                     cout<<count<<endl;
//                 }
//             }
//             return count;
//         }
//     };