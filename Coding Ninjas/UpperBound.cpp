// int upperBound(vector<int> &arr, int x, int n) {
//   // Write your code here.
//   int start = 0;
//   int end = n - 1;

//   while (start <= end) {
//     int mid = start + (end - start) / 2;
//     if (arr[mid] <= x) {
//       start = mid + 1;
//     } else {
//       end = mid - 1;
//     }
//   }
//   return start;
// }
// https://www.naukri.com/code360/problems/implement-upper-bound_8165383?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION