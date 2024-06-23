// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

// class Solution
// {
//     public:
//         vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
//         {
//             vector<bool> isgreat;
//             int max = INT_MIN;
//            	///int totalCandies=0;
//             for (int i = 0; i < candies.size(); i++)
//             {
//                 if (candies[i] > max)
//                 {
//                     max = candies[i];
//                 }
//             }
//             for (int i = 0; i < candies.size(); i++)
//             {
//                 if (extraCandies + candies[i] >= max)
//                 {
//                     isgreat.push_back(true);
//                 }
//                 else
//                 {
//                     isgreat.push_back(false);
//                 }
//             }
//             return isgreat;
//         }
// };