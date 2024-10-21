// class Solution {
// public:
//     string longestDiverseString(int a, int b, int c) {
//        priority_queue<pair<int, char>> pq;
//         if (a > 0) {
//             pq.push({a, 'a'});
//         }

//         if (b > 0) {
//             pq.push({b, 'b'});
//         }
//         if (c > 0) {
//             pq.push({c, 'c'});
//         }

//         string ans = "";

//         while (!pq.empty()) {
//             int currentcount = pq.top().first;
//             int currentchar = pq.top().second;
//             pq.pop();

//             if (ans.length() >= 2 && ans[ans.length() - 1] == currentchar &&
//                 ans[ans.length() - 2] == currentchar) {
//                 // we cant use current character
//                 // check for next largest freq
//                 if (pq.empty()) {
//                     break;
//                 }
//                 int nextcount = pq.top().first;
//                 int nextchar = pq.top().second;
//                 pq.pop();

//                 ans.push_back(nextchar);
//                 nextcount--;

//                 if (nextcount > 0) {
//                     pq.push({nextcount, nextchar});
//                 }
//             } else {
//                 currentcount--;
//                 ans.push_back(currentchar);
//             }
//             if (currentcount > 0) {
//                 pq.push({currentcount, currentchar});
//             }
//         }
//         return ans;
//     }
// };