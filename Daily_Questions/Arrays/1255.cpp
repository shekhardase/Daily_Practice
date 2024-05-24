// // https://leetcode.com/problems/maximum-score-words-formed-by-letters/description/

// class Solution
// {
//     public:

//         int maxscore;
//     int n;

//     void solve(int i, vector<int> &score, vector<string> &words, int currScore, vector< int > &freq)
//     {
//         maxscore = max(maxscore, currScore);
//         if (i >= n)
//         {
//             return;
//         }

//        	// can we take
//         int j = 0;
//         int tempScore = 0;
//         vector<int> tempfreq = freq;
//         while (j < words[i].length())
//         {
//             char ch = words[i][j];

//             tempfreq[ch - 'a']--;
//             tempScore += score[ch - 'a'];

//             if (tempfreq[ch - 'a'] < 0)
//             {
//                 break;
//             }
//             j++;
//         }

//         if (j == words[i].length())
//         {
//            	// take ooption
//             solve(i + 1, score, words, currScore + tempScore, tempfreq);
//         }

//        	//no take
//         solve(i + 1, score, words, currScore, freq);
//     }

//     int maxScoreWords(vector<string> &words, vector<char> &letters,
//         vector<int> &score)
//     {
//         vector<int> freq(26, 0);
//         for (char &ch: letters)
//         {
//             freq[ch - 'a']++;
//         }

//         n = words.size();

//         solve(0, score, words, 0, freq);
//         return maxscore;
//     }
// };