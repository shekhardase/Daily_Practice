// https://leetcode.com/problems/complement-of-base-10-integer/
// class Solution {
// public:
//     int bitwiseComplement(int num) {
//             if(num==0)
//             {
//                 return 1;
//             }
//           string form = "";

//             while (num)
//             {
//                 int temp = num % 2;
//                 num = num / 2;
//                 if (temp == 1)
//                 {
//                     form += '1';
//                 }
//                 else
//                 {
//                     form += '0';
//                 }
//             }
//             reverse(form.begin(), form.end());
//             cout << form;
//             int ans = 0;
//             for (int i = form.size() - 1; i >= 0; i--)
//             {
//                 if (form[i] == '0')
//                 {

//                     int t = form.size() - i - 1;
//                     ans += pow(2, t);
//                 }
//             }
//             return ans;
//     }

// };