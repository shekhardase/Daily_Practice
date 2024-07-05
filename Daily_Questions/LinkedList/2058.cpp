// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/?envType=daily-question&envId=2024-07-05

// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int minDistance = INT_MAX;
//         int maxDistance = -1;

//         ListNode* prev = head;
//         ListNode* curr = head->next;
//         int position = 1;
//         int firstCritical = -1;
//         int lastCritical = -1;

//         while (curr && curr->next) {
//             if ((curr->val > prev->val && curr->val > curr->next->val) ||
//                 (curr->val < prev->val && curr->val < curr->next->val)) {

//                 if (firstCritical == -1) {
//                     firstCritical = lastCritical = position;
//                 } else {
//                     minDistance = min(minDistance, position - lastCritical);
//                     lastCritical = position;
//                 }
//             }
//             prev = curr;
//             curr = curr->next;
//             position++;
//         }

//         if (minDistance == INT_MAX) {
//             return {-1, -1};
//         }

//         maxDistance = lastCritical - firstCritical;
//         return {minDistance, maxDistance};
//     }
// };