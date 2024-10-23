// https://leetcode.com/problems/validate-stack-sequences/submissions/1431151626/
// class Solution {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         int i = 0 ;
//         int j = 0 ;
//         int n = pushed.size();

//         vector<int>v;
//         for(int i = 0 ; i < n ; i++)
//         {
//             v.push_back(pushed[i]);
//             while(v.size())
//             {
//                 if(v.back() == popped[j])
//                 {
//                     j++;
//                     v.pop_back();
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return (j==n);
//     }
// };