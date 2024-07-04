// https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04

// class Solution
// {
//     public:
//         ListNode* mergeNodes(ListNode *head)
//         {
//             vector<int> sums;
//             ListNode *temp2 = head->next;	// Start from the first node after the initial zero
//             int count = 0;

//             while (temp2 != nullptr)
//             {
//                 if (temp2->val != 0)
//                 {
//                     count += temp2->val;	// Add up values between zeros
//                 }
//                 else
//                 {
//                     if (count != 0)
//                     {
//                     	// To avoid adding an extra zero at the end
//                         sums.push_back(count);	// Store the sum in the vector
//                         count = 0;	// Reset count for the next segment
//                     }
//                 }
//                 temp2 = temp2->next;	// Move to the next node
//             }

//            	// Now create the new linked list using the vector
//             ListNode *dummy = new ListNode(0);	// Dummy node to simplify the head handling
//             ListNode *current = dummy;	// Pointer to construct the new list

//             for (int sum: sums)
//             {
//                 current->next = new ListNode(sum);	// Create new node with the sum
//                 current = current->next;	// Move to the next node
//             }

//             return dummy->next;	// Return the next node after dummy, which is the real head
//         }
// };