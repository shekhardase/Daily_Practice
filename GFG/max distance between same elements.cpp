// https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=max-distance-between-same-elements

// https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=max-distance-between-same-elements

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
//     public:
//     // your task is to complete this function
//     int maxDistance(int arr[], int n)
//     {
//     unordered_map<int, int> mp;
//         int maxdis = 0;
//         for (int i = 0; i < n; i++) {
//             // check if the element is present or not
//             if (mp.find(arr[i]) == mp.end()) {
//                 mp[arr[i]] = i;
//             } else {
//                 maxdis = max(maxdis, i - mp[arr[i]]);
//             }
//         }
//         return maxdis;
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++)
//             cin>>arr[i];
//         Solution ob;
//         cout<<ob.maxDistance(arr,n)<<endl;
//     }
//     return 0;
// }
// // } Driver Code Ends