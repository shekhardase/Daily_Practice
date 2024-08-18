// https://www.naukri.com/code360/problems/lower-bound_8165382?leftPanelTabValue=PROBLEM&count=25&search=&sort_entity=order&sort_order=ASC
// int lowerBound(vector<int> arr, int n, int x) {
//     int start = 0;
//     int end = n - 1;
//     int ans = n; // Initialize with n, which means x is greater than all elements

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] >= x) {
//             ans = mid; // Update ans to the current mid, as it could be the lower bound
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return ans; // Return the lower bound index
// }
