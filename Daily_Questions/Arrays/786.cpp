// class Solution
// {
//     public:
//         vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
//         {
//             vector<vector < int>> pairs;
//             int n = arr.size();

//             for (int i = 0; i < n - 1; i++)
//             {
//                 for (int j = i + 1; j < n; j++)
//                 {
//                     pairs.push_back({ arr[i],
//                         arr[j] });
//                 }
//             }

//             sort(pairs.begin(), pairs.end(), [& ](vector<int> &a, vector<int> &b)
//             {
//                 double adouble = a[0] *1.0 / a[1] *1.0;
//                 double bdouble = b[0] *1.0 / b[1] *1.0;
//                 return adouble < bdouble;
// 	});

//             return pairs[k - 1];
//         }
// };

// https://leetcode.com/problems/k-th-smallest-prime-fraction/?envType=daily-question&envId=2024-05-10