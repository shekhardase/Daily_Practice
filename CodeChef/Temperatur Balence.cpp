// https://www.codechef.com/START167D/problems/TEMPBAL

// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector < int > A(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }

//         vector < long long > prefixSum(n);
//         prefixSum[0] = A[0];
//         for (int i = 1; i < n; i++)
//         {
//             prefixSum[i] = prefixSum[i - 1] + A[i];
//         }

//         long long count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             count += abs(prefixSum[i]);
//         }

//         cout << count << endl;
//     }

//     return 0;
// }