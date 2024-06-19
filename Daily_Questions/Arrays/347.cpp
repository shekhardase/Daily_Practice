// https://leetcode.com/problems/top-k-frequent-elements/description/

// class Solution
// {
//     public:

//         vector<int> topKFrequent(vector<int> &nums, int k)
//         {
//            	// Step 1: Count the frequency of each element
//             unordered_map<int, int> frequencyMap;
//             for (int num: nums)
//             {
//                 frequencyMap[num]++;
//             }

//            	// Step 2: Convert the frequency map to a vector of pairs
//             vector<pair<int, int>> freqVec;
//             for (auto &pair: frequencyMap)
//             {
//                 freqVec.push_back({ pair.second,
//                     pair.first });
//             }

//            	// Step 3: Sort the vector of pairs by frequency in descending order
//             sort(freqVec.begin(), freqVec.end(), greater<pair<int, int>> ());

//            	// Step 4: Extract the top k elements
//             vector<int> result;
//             for (int i = 0; i < k; ++i)
//             {
//                 result.push_back(freqVec[i].second);
//             }

//             return result;
//         }
// };