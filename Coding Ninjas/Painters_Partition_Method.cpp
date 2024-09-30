// https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;

// // Helper function to check if we can split the array into K subarrays with the largest sum <= mid
// bool canSplit(const vector<int>& A, int K, int mid) {
//     int subarrayCount = 1;
//     int currentSum = 0;
    
//     for (int i = 0; i < A.size(); i++) {
//         // If adding the current element exceeds the mid, we need to form a new subarray
//         if (currentSum + A[i] > mid) {
//             subarrayCount++;
//             currentSum = A[i];  // Start a new subarray
//             if (subarrayCount > K) return false;  // Too many subarrays
//         } else {
//             currentSum += A[i];  // Continue adding to the current subarray
//         }
//     }
    
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int low = *max_element(boards.begin(), boards.end());  // The maximum single element
//     int high = accumulate(boards.begin(), boards.end(), 0);  // The sum of all elements
    
//     // Perform binary search
//     while (low < high) {
//         int mid = low + (high - low) / 2;
        
//         // Check if it's possible to split with this mid as the largest sum
//         if (canSplit(boards, k, mid)) {
//             high = mid;  // Try to find a smaller possible largest sum
//         } else {
//             low = mid + 1;  // Increase the possible largest sum
//         }
//     }
    
//     return low;
// }