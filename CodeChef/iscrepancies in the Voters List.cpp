// https://www.codechef.com/problems/VOTERS?tab=ide

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;
//     vector < int > nums(n1 + n2 + n3);

//     map < int, int > mp;
//     for (int i = 0; i < n1 + n2 + n3; i++)
//     {
//         cin >> nums[i];
//     }

//     for (auto i: nums)
//     {
//         mp[i]++;
//     }

//     vector < int > ans;

//     for (auto i: mp)
//     {
//         if (i.second >= 2)
//         {
//             ans.push_back(i.first);
//         }
//     }

//     cout << ans.size() << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//     }

// }