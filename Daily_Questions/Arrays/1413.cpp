// // https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
// class Solution
// {
// public:
//     int maxScore(vector<int> &cardPoints, int k)
//     {
//         int n = cardPoints.size();
//         int windowSum = 0;
//         int maxScore = 0;

//         // Calculate the sum of the first k elements
//         for (int i = 0; i < k; ++i)
//         {
//             windowSum += cardPoints[i];
//         }
//         maxScore = windowSum;

//         // Traverse the array in reverse
//         for (int i = k - 1, j = n - 1; i >= 0; --i, --j)
//         {
//             // Update windowSum by subtracting the last element and adding the current element from the end
//             windowSum = windowSum - cardPoints[i] + cardPoints[j];
//             // Update maxScore if a greater sum is encountered
//             maxScore = max(maxScore, windowSum);
//         }


//         return maxScore;
//     }
// };


/*

1 ) Find first k element sum 
2 ) traverse element from end now 
3 ) if greater found then add to variable and subtract start element
4 ) keep updating

*/