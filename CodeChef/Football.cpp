// https://www.codechef.com/problems/MSNSADM1

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector < int > a(n);
//         vector < int > b(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
        
//         int final = INT_MIN;
        
//         for(int i = 0 ; i < n ; i++)
//         {
//             int ans = 0;
//             ans = 20 * a[i]  - 10 * b[i];
//             if(ans<0)
//             {
//                 ans = 0 ;
//             }
//             final = max(ans , final);
            
//         }
//         cout<<final<<endl;
//     }

// }