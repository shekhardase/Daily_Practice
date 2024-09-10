// https://leetcode.com/problems/spiral-matrix-iv/?envType=daily-question&envId=2024-09-09
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         vector<vector<int>>ans(m , vector<int>(n,-1));

//         int startingRow = 0 ;
//         int startingCol = 0 ;
//         int endRow = m -1 ;
//         int endCol = n-1;

//         int count = 0 ;
//         // int total = m * n ;
//         ListNode* temp = head;
//         cout<<temp->val;
//         while(temp)
//         {
//             for(int i = startingRow ; i <= endCol && temp; i++)
//             {
//                 ans[startingRow][i] = temp->val;
//                 temp = temp->next;
//                 // count++;
//             }
//             startingRow++;

            
//             for (int i = startingRow;i <= endRow && temp; i++) {
//                 ans[i][endCol] = temp->val;
//                 temp = temp->next;
//                 // count++;
//             }
//             endCol--;

//             for (int i = endCol; i >= startingCol && temp; i--) {
//                 ans[endRow][i] = temp->val;
//                 temp = temp->next;
//                 // count++;
//             }
//             endRow--;

//             for (int i = endRow; i >= startingRow && temp; i--) {
//                 ans[i][startingCol] = temp->val;
//                 temp = temp->next;
//                 // count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };