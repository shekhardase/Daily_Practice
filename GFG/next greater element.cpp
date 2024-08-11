// https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to find the next greater element for each element of the array.
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//   vector<long long> ans(n, -1);  // Initialize the result array with -1
//         stack<long long> st;

//         for(int i = 0; i < n; i++) {
//             // While stack is not empty and the current element is greater than
//             // the element at the top of the stack, pop the stack and update ans.
//             while(!st.empty() && arr[st.top()] < arr[i]) {
//                 ans[st.top()] = arr[i];
//                 st.pop();
//             }
//             // Push current index to the stack
//             st.push(i);
//         }

//         return ans;
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
//         vector<lon
// g long> arr(n);
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         Solution obj;
//         vector <long long> res = obj.nextLargerElement(arr, n);
//         for (long long i : res) cout << i << " ";
//         cout<<endl;
//     }
// 	return 0;

// }
// // } Driver Code Ends