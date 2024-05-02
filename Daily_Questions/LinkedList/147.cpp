// // https://leetcode.com/problems/insertion-sort-list/description/

// /**
//  *Definition for singly-linked list.
//  *struct ListNode {
//  *    int val;
//  *    ListNode * next;
//  *    ListNode() : val(0), next(nullptr) {}
//  *    ListNode(int x) : val(x), next(nullptr) {}
//  *    ListNode(int x, ListNode *next) : val(x), next(next) {}
//  *};
//  */
// class Solution
// {
//     public:
//         ListNode* insertionSortList(ListNode *head)
//         {

//             ListNode *temp = head;
//             vector<int> ans;
//             while (temp != NULL)
//             {
//                 ans.push_back(temp->val);
//                 temp = temp->next;
//             }

//             sort(ans.begin(), ans.end());

//             ListNode *dummy = new ListNode();	// Dummy head for the new linked list
//             ListNode *current = dummy;	// Pointer to track the current node in the new linked list
//             for (int i = 0; i < ans.size(); ++i)
//             {
//                 current->next = new ListNode(ans[i]);	// Create a new node with the current value
//                 current = current->next;	// Move to the next node
//             }

//             return dummy->next;
//         }
// };