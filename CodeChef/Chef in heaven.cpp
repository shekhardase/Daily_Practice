// // https : // www.codechef.com/problems/CCHEAVEN

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l;
//         cin >> l;
//         string s;
//         cin >> s;

//         int count = 0;
//         bool can_go_to_heaven = false;

//         for (int i = 0; i < l; i++)
//         {
//             if (s[i] == '1')
//             {
//                 count++;
//             }
//             int yrs = i + 1;
//             if (yrs <= 2 * count)
//             {
//                 can_go_to_heaven = true;
//                 break;
//             }
//         }

//         if (can_go_to_heaven)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
