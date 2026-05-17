// #include <iostream>
// #include <vector>
// #include <unordered_map> // <-- Using a map this time

// using namespace std;

// int subarraySumEqualsK(vector<int>& nums, int k) {
//     int totalCount = 0;
//     int currentSum = 0;
    
//     // Map to store: <PrefixSum, Frequency>
//     unordered_map<int, int> seenSums;

//     // 1. How do we initialize the map to handle subarrays
//     //    that start from index 0 (i.e., where prefix[i-1] is 0)?
//     //    (Hint: We've "seen" the sum 0 one time)
    

//     for (int num : nums) {
//         currentSum += num; // Update the running prefix sum

//         // 2. What's the target sum we are looking for in the map?
//         //    (Based on our rearranged formula)
//         int targetSum = __________________;

//         // 3. How do you check if this targetSum exists in the map?
//         //    (The syntax is: map.count(key) > 0)
//         if (_________________________) {
            
//             // 4. If it exists, how many new subarrays did we find?
//             //    (Hint: Get the value/frequency from the map)
//             totalCount += ___________________;
//         }

//         // 5. No matter what, we need to update the map
//         //    to include our *currentSum*. How do you do that?
//         _____________________________;
//     }

//     return totalCount;
// }

// int main() {
//     vector<int> nums = {1, 2, 3};
//     int k = 3;
//     cout << "Total subarrays: " << subarraySumEqualsK(nums, k) << endl; // Output should be 2
    
//     vector<int> nums2 = {1, 1, 1};
//     int k2 = 2;
//     cout << "Total subarrays: " << subarraySumEqualsK(nums2, k2) << endl; // Output should be 2
    
//     return 0;
// }