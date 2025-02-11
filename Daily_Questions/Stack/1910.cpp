// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/?envType=daily-question&envId=2025-02-11



// class Solution {
//     public:
    
//             bool check(stack<char>& st, string& part , int n )
//             {
//                 stack<char> tempSt = st;
    
//                 for(int index = n-1 ; index >= 0 ; index--)
//                 {
//                     if(tempSt.top() != part[index])
//                     {
//                         return false;
//                     }
//                     tempSt.pop();
//                 }
//                 return true;
//             }
    
    
//         string removeOccurrences(string s, string part) {
            
//             stack<char>st;
    
//             int m = s.length();
//             int n = part.length();
    
//             for(int i= 0; i < m ;  i++)
//             {
//                 st.push(s[i]);
    
//                 if(st.size() >= n && check(st,part,n) == true)
//                 {
//                     for(int j = 0 ; j <n ; j++)
//                     {
//                         st.pop();
//                     }
//                 }
    
//             }
    
//             string result = "";
//             while(!st.empty())
//             {
//                 result.push_back(st.top());
//                 st.pop();
//             }
//             reverse(begin(result) , end(result));
    
//             return result;
    
//         }
//     };