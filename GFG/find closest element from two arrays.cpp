// https://www.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function teamplate for C++
// class Solution{
//   public:
//     vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
//         int start = 0;
//         int end = m - 1;

//         int closest_sum = INT_MAX;
//         int closest_pair[2];

//         while(start < n && end >= 0) {
//             int current_sum = arr[start] + brr[end];

//             if(abs(current_sum - x) < abs(closest_sum - x)) {
//                 closest_sum = current_sum;
//                 closest_pair[0] = arr[start];
//                 closest_pair[1] = brr[end];
//             }

//             if(current_sum > x) {
//                 end--;
//             } else {
//                 start++;
//             }
//         }

//         return {closest_pair[0], closest_pair[1]};
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
// 	int t;
// 	cin>>t;
// 	int m,n,x;
// 	while(t--)
//     {
//         cin>>n>>m;
//         int a[n],b[m];

//         for(int i=0;i<n;i++)
//             cin>>a[i];

//         for(int i=0;i<m;i++)
//             cin>>b[i];

//         cin>>x;

//         vector<int> ans;
//         Solution ob;
//         ans = ob.printClosest(a, b, n, m, x);
//         cout << abs(ans[0] + ans[1] - x) << endl;

//     }
//     return 0;
// }

// // } Driver Code Ends