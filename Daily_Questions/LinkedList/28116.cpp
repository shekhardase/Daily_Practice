// // https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/?envType=daily-question&envId=2024-05-07

// class Solution
// {
//     public:
//         ListNode* doubleIt(ListNode *head)
//         {
//             ListNode *curr = head;
//             ListNode *prev = nullptr;

//            	// Traverse the linked list
//             while (curr != nullptr)
//             {
//                 int twiceOfVal = curr->val * 2;

//                	// If the doubled value is less than 10
//                 if (twiceOfVal < 10)
//                 {
//                     curr->val = twiceOfVal;
//                 }

//                	// If doubled value is 10 or greater
//                 else if (prev != nullptr)
//                 {
//                 	// other than first node
//                    	// Update current node's value with units digit of the doubled value
//                     curr->val = twiceOfVal % 10;
//                    	// Add the carry to the previous node's value
//                     prev->val = prev->val + 1;
//                 }
//                	// If it's the first node and doubled value is 10 or greater
//                 else
//                 {
//                 	// first node
//                    	// Create a new node with carry as value and link it to the current node
//                     head = new ListNode(1, curr);
//                    	// Update current node's value with units digit of the doubled value
//                     curr->val = twiceOfVal % 10;
//                 }

//                	// Update prev and curr pointers
//                 prev = curr;
//                 curr = curr->next;
//             }
//             return head;
//         }
// };