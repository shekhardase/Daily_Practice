// https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

// int searchInsert(vector<int> &arr, int m) {
//   // Write your code here
//   int n = arr.size()
//   ;

//   int start = 0;
//   int end = n - 1;
//   int ans = n;
//   int mid = start + (end - start) / 2;
//   while (start <= end) {

//     if (arr[mid] == m) {
//       return mid;
//     } else if (arr[mid] < m) {
//       start = mid + 1;
//     } else {
//       ans = mid;
//       end = mid - 1;
//     }
//     mid = start + (end - start) / 2;
//   }
//   return ans;
// }