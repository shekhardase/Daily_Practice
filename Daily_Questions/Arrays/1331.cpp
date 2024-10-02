// https://leetcode.com/problems/rank-transform-of-an-array/description/?envType=daily-question&envId=2024-10-02
// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr) {
//         int n = arr.size();
//         if(n == 0)
//             return {};
            
//         int count = 1;
//         vector<int> temp = arr;

//         sort(temp.begin(),temp.end());

//         map<int,int> mpp;
//         mpp[temp[0]] = count;
//         for(int i = 1;i < n;i++)
//         {
//             if(temp[i] == temp[i-1])
//                 continue;
            
//             count++;
//             mpp[temp[i]] = count;
//         }

//         for(int i = 0;i < n;i++)
//         {
//             arr[i] = mpp[arr[i]];
//         }

//         return arr;
//     }
// };