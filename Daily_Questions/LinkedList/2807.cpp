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
//     ListNode* insertGreatestCommonDivisors(ListNode* head) {
//         // vector<int>temp;
//         if (head == nullptr || head->next == nullptr) {
//             return head;
//         }
//         ListNode* node1 = head;
//         ListNode* node2 = head->next;
//         while (node1->next != NULL) {
//             // temp.push_back(temp->val);
//             int data = __gcd(node1->val, node2->val);
//             ListNode* gcd = new ListNode(data);
//             node1->next = gcd;
//             gcd->next = node2;

//             node1 = node2;
//             node2 = node2->next;
//         }
//         return head;
//     }
//     // cout << "gcd(10, 20) = " << __gcd(10, 20) << endl;
// };

// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/?envType=daily-question&envId=2024-09-10