

// https://leetcode.com/problems/baseball-game/submissions/1245905382/

// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int>st;
//         int i=0;
//         int size = operations.size();
//         int prev=0;
//          int newprev=0;
//         while(i<size){
//             if(st.empty()){
//                 st.push(stoi(operations[i]));
//                 prev = 0;
//                 i++;

//             }
//             else{
//                 if(operations[i]=="+"){
//                     int x = st.top();
//                     st.pop();
//                     prev = st.top();
//                     st.push(x);
//                     st.push(prev+st.top());
//                     x=st.top();
//                     st.pop();
//                     prev=st.top();
//                     st.push(x);
//                     i++;
//                 }
//                 else if(operations[i]=="C"){
//                     st.pop();
//                     i++;
//                 }
//                 else if(operations[i]=="D"){
//                     prev = st.top();
//                     st.push(2*st.top());
//                     i++;
//                 }
//                 else{
                    
//                     prev  = st.top();
                    
//                     st.push(stoi(operations[i]));
//                     i++;

//                 }
//             }
//         }
//         int sum=0;
//         while(!st.empty()){
//             sum =sum+st.top();
//             st.pop();
//         }
//         return sum;

        
//     }
// };