// https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;


// // } Driver Code Ends
// // User function template for C++
// class Solution {
//   public:
//     int findKRotation(vector<int> &arr) {
//         int start = 0 ;
//         int end = arr.size()-1;
//         while(start< end)
//         {
//             int mid = start+(end-start)/2;
//             if(arr[end]<arr[mid])
//             {
//                 start=mid+1;
//             }
//             else{
//                 end = mid;
//             }
//         }
//         return start;
//     }
// };


// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr;
//         string input1;
//         getline(cin, input1);
//         stringstream ss1(input1);
//         int number1;
//         while (ss1 >> number1) {
//             arr.push_back(number1);
//         }
//         Solution ob;
//         int res = ob.findKRotation(arr);
//         cout << res << endl;
//     }
// }
// // } Driver Code Ends