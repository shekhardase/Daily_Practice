// https://leetcode.com/problems/crawler-log-folder/?envType=daily-question&envId=2024-07-10

// class Solution {
// public:
//     int minOperations(vector<string>& logs) {
//      int n = logs.size();
//      stack<string> st;
//      for(int i=0; i<n; i++){
//        if(logs[i] == "../"){
//         if(!st.empty())
//         st.pop();
//        }
//        else if(logs[i] != "./")
//        st.push(logs[i]);
//      }
//      return st.size();
//     }
// };