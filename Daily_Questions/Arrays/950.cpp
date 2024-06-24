// https://leetcode.com/problems/reveal-cards-in-increasing-order/description/

// class Solution
// {
//     public:
//         vector<int> deckRevealedIncreasing(vector<int> &deck)
//         {
//             int n = deck.size();

//             vector<int> result(n, 0);

//             bool skip = false;

//             int i = 0;	// to keep track of deck
//             int j = 0;	// to keep track of empty space in our result

//             sort(deck.begin(), deck.end());

//             while (i < n)
//             {
//                 if (result[j] == 0)
//                 {
//                     if (skip == false)
//                     {
//                         result[j] = deck[i];
//                         i++;
//                     }
//                     skip = !skip;
//                 }
//                 j = (j + 1) % n;
//             }
//             return result;
//         }
// };