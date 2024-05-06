// // https://leetcode.com/problems/remove-nodes-from-linked-list/description/?envType=daily-question&envId=2024-05-06
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
//     void helper(ListNode *head, ListNode* &maxNode)
//     {
//         if (head == nullptr) return;
//         helper(head->next, maxNode);

//         if (head->next == nullptr || head->val >= maxNode->val)
//         {
//             ListNode *newNode = new ListNode(head->val);
//             newNode->next = maxNode;
//             maxNode = newNode;
//         }
//     }
//     public:
//         ListNode* removeNodes(ListNode *head)
//         {
//             if (head == nullptr) return nullptr;

//             ListNode *maxNode = nullptr;
//             helper(head, maxNode);

//             return maxNode;
//         }
// };