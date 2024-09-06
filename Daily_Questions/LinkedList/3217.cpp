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
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         set<int> st(nums.begin(), nums.end());

//         ListNode* curr = head;

//         while (curr) {
//             if (st.count(curr->val)) {
//                 curr = curr->next;
//             } else
//                 break;
//         }

//         ListNode* newhead = curr;
//         while (curr && curr->next) {
//             if (st.count(curr->next->val)) {
//                 curr->next = curr->next->next;
//             } else {
//                 curr = curr->next;
//             }
//         }
//         return newhead;
//     }
// };
// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/?envType=daily-question&envId=2024-09-06