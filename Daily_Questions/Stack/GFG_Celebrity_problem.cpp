// // // https://www.geeksforgeeks.org/problems/the-celebrity-problem/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// // ================================Two Pointer=========================================
// // most optimsed
// // o(n) space
// //   time

// // #include <vector>
// // using namespace std;

// // class Solution
// // {
// //     private:
// //     bool knows(vector<vector<int>>& M, int a, int b) {
// //         return M[a][b] == 1;
// //     }

// //     public:
// //     // Function to find if there is a celebrity in the party or not.
// //     int celebrity(vector<vector<int>>& M, int n)
// //     {
// //         int a = 0;
// //         int b = n - 1;

// //         // Step 1: Find the potential celebrity
// //         while (a < b) {
// //             if (knows(M, a, b)) {
// //                 a++;
// //             } else {
// //                 b--;
// //             }
// //         }

// //         int candidate = a;

// //         // Step 2: Verify the candidate
// //         for (int i = 0; i < n; ++i) {
// //             if (i != candidate) {
// //                 if (knows(M, candidate, i) || !knows(M, i, candidate)) {
// //                     return -1;
// //                 }
// //             }
// //         }

// //         return candidate;
// //     }
// // };

// // // Driver code
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<vector<int>> M(n, vector<int>(n, 0));
// //         for (int i = 0; i < n; i++) {
// //             for (int j = 0; j < n; j++) {
// //                 cin >> M[i][j];
// //             }
// //         }
// //         Solution ob;
// //         cout << ob.celebrity(M, n) << endl;
// //     }
// //     return 0;
// // }

// // =======================================using stack ===========================================

// o(n) but uses extra space

// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends

// class Solution
// {
//     private:
//     bool knows(vector<vector<int> >& M , int a, int b , int n)
//     {
//         if(M[a][b] ==1)
//         {
//             return true;
//         }
//         else{
//               return false;
//         }

//     }

//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n)
//     {
//         stack<int>s;

//         // step 1 : push all elements in stack

//         for(int i = 0 ; i< n;i++){
//             s.push(i);
//         }

//         // step 2 : get 2 elements and compare them

//         while(s.size() >1)
//         {
//             int a = s.top();
//             s.pop();

//             int b = s.top();
//             s.pop();

//             if(knows(M,a,b,n))
//             {
//                 s.push(b);
//             }
//             else{
//                 s.push(a);
//             }
//         }

//         int ans = s.top();

//         // step 3 : single element in stack is potential candidate
//         // so verify it

//         bool rowCheck= false;

//         int zeroCount = 0 ;
//         for(int i = 0 ; i < n ;i++)
//         {
//             if(M[ans][i] == 0 )
//             {
//                 zeroCount++;
//             }

//         }
//         if(zeroCount == n)
//         {
//             rowCheck = true;
//         }

//         bool colCheck = false;

//         int oneCount = 0 ;
//         for(int i = 0 ; i < n ;i++)
//         {
//             if(M[i][ans] == 1)
//             {
//                 oneCount++;
//             }
//         }
//         if(oneCount ==n-1)
//      {
//          colCheck = true;
//      }

//      if(rowCheck == true && colCheck == true)
//      {
//          return ans;
//      }
//    else{
//        return -1;
//    }

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
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }
//         Solution ob;
//         cout<<ob.celebrity(M,n)<<endl;

//     }
// }

// // } Driver Code Ends