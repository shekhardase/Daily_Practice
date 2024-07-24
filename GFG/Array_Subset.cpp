// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=array-subset
// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=array-subset
// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// string isSubset(int a1[], int a2[], int n, int m) ;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         int a1[n], a2[m];

//         for (int i = 0; i < n; i++) {
//             cin >> a1[i];
//         }
//         for (int i = 0; i < m; i++) {
//             cin >> a2[i];
//         }

//         cout << isSubset(a1, a2, n, m) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends

// string isSubset(int a1[], int a2[], int n, int m) {
//    unordered_map<int, int> mp;

//     // Count occurrences of each element in a1
//     for (int i = 0; i < n; i++) {
//         mp[a1[i]]++;
//     }

//     // Check if all elements of a2 are present in a1 with sufficient counts
//     for (int i = 0; i < m; i++) {
//         if (mp[a2[i]] > 0) {
//             mp[a2[i]]--;
//         } else {
//             return "No";
//         }
//     }

//     return "Yes";
// }