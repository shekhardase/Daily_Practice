// https://leetcode.com/problems/circular-sentence/description/?envType=daily-question&envId=2024-11-02

// class Solution {
// public:
//     bool isCircularSentence(string sentence) {
//         stringstream s(sentence);
//         string word;
//         vector<string> words;
//         while (s >> word) {
//             words.push_back(word);
//         }

//         // return true;
//         for (auto i : words) {
//             cout << i << " ";
//             cout << endl;
//         }

//         char last = words[words.size() - 1].back();

//         for (int i = 0; i < words.size(); i++) {
//             cout << words[i].front() << " ";
//             cout << endl;
//             cout << last << endl;
//             cout << endl;
//             if (words[i].front() != last) {

//                 return false;
//             }
//             last = words[i].back();
//         }
//         return true;
//     }
// };