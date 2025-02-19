// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/?envType=daily-question&envId=2025-02-19

// class Solution
// {
//     public:

//         void solve(int n, string curr, vector<string> &result)
//         {
//             if (curr.length() == n)
//             {
//                 result.push_back(curr);
//                 return;
//             }

//             for (char ch = 'a'; ch <= 'c'; ch++)
//             {
//                 if (!curr.empty() && curr.back() == ch)
//                 {
//                     continue;
//                 }

//                	//do
//                 curr.push_back(ch);

//                	// explore
//                 solve(n, curr, result);

//                	// undo
//                 curr.pop_back();
//             }
//         }

//     string getHappyString(int n, int k)
//     {
//         string curr = "";
//         vector<string> result;

//         solve(n, curr, result);

//         if (result.size() < k)
//         {
//             return "";
//         }
//         return result[k - 1];
//     }
// };