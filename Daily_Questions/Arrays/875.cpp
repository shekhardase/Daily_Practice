// https://leetcode.com/problems/koko-eating-bananas/

// class Solution
// {
//     public:
//         bool can(vector<int> &piles, int h, int mid)
//         {
//             int hrs = 0;
//             for (int i: piles)
//             {
//                 hrs += ceil(static_cast<double> (i) / mid);	// Use integer division to compute the ceiling
//             }
//             return hrs <= h;
//         }

//     int minEatingSpeed(vector<int> &piles, int h)
//     {
//         int minspeed = 1;	// Speed cannot be 0
//         int maxspeed = *max_element(piles.begin(), piles.end());

//         while (minspeed < maxspeed)
//         {
//             int mid = minspeed + (maxspeed - minspeed) / 2;

//             if (can(piles, h, mid))
//             {
//                 maxspeed = mid;	// If it's possible to eat at speed mid, try for a lower speed
//             }
//             else
//             {
//                 minspeed = mid + 1;	// If not possible, increase the speed
//             }
//         }
//         return minspeed;
//     }
// };