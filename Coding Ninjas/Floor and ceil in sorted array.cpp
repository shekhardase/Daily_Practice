// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
//   int floor = -1;
//   int ceil = -1;

//   int start = 0;
//   int end = n - 1;

//   // Finding Floor
//   while (start <= end) {
//     int mid = start + (end - start) / 2;

//     if (a[mid] == x) {
//       floor = a[mid];
//       ceil = a[mid];
//       return {floor, ceil};
//     } else if (a[mid] < x) {
//       floor = a[mid];  // Update floor because a[mid] is less than x
//       start = mid + 1;
//     } else {
//       ceil = a[mid];   // Update ceil because a[mid] is greater than x
//       end = mid - 1;
//     }
//   }

//   return {floor, ceil};
// }

// https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=SUBMISSION