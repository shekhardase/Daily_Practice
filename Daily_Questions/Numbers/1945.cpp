// class Solution {
// public:
//     int getLucky(string s, int k) {
//         string number = "";
//         for (char i : s) {
//             number += to_string(i - 'a' + 1);
//             cout<<number<< " ";
//         }
//         cout<<endl;
//         while(k> 0)
//         {
//             int temp =0 ;
//             for(char x : number)
//             {
//                 temp += x - '0';
//             }
//             number = to_string(temp);
//             cout<<number<< " ";
//             k--;
//         }
//         return stoi(number);
//     }
// };
// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/?envType=daily-question&envId=2024-09-03