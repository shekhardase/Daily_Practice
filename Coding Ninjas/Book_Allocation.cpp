// <!-- https://www.naukri.com/code360/problems/allocate-books_1090540?leftPanelTabValue=PROBLEM

// bool isPossible(vector<int> &arr, int n, int maxPages, int m) {
//   int student = 1;
//   int sum = 0;

//   for (int i = 0; i < n; i++) {
//     sum += arr[i];

//     if (sum > maxPages) {
//       student++;
//       sum = arr[i];

//       if (student > m) {
//         return false;
//       }
//     }
//   }
//   return true;
// }

// int findPages(vector<int> &arr, int n, int m) {
//   int mini = 0;

//   if (n == m) {
//     for (int i = 0; i < n; i++) {
//       mini = max(mini, arr[i]);
//     }
//     return mini;
//   }

//   if(n < m)
//   {
//       return -1;
//   }

//   int start = *max_element(arr.begin(), arr.end());
//   int end = 0;
//   for (int i = 0; i < n; i++) {
//     end = end + arr[i];
//   }
//   int ans = -1;

//   while (start <= end) {
//       int mid = start + (end-start)/2;
//     if (isPossible(arr, n, mid, m)) {
//         ans = mid;
//         end = mid-1;
//     }
//     else{
//         start= mid+1;
//     }
//   }

//   return ans;
// } -->
