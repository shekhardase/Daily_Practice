

// bool isPossible(int distance, vector<int> &stalls, int k) {
//   int countcows = 1;
//   int last = stalls[0];
//   for (int i = 1; i < stalls.size(); i++) {
//     if (stalls[i] - last >= distance) {
//       countcows++;
//       last = stalls[i];
//     }
//     if (countcows >= k) {
//       return true;
//     }
//   }
//   return false;
// }

// int aggressiveCows(vector<int> &stalls, int k) {
//   sort(stalls.begin(), stalls.end());
//   int n = stalls.size();
//   int low = 1;
//   int high = stalls[n - 1] - stalls[0];

//   int  mid = high - (high - low) / 2;

//   while (low <= high) {
//     if (isPossible(mid, stalls, k)) {
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//      mid = high - (high - low) / 2;
//   }
//   return high;
// }