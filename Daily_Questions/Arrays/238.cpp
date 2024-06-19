// https://leetcode.com/problems/product-of-array-except-self/description/

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(n , 1);

//         int prefix = 1;
//         for(int i = 0 ; i < n ; i++)
//         {
//             result[i] = prefix ;
//             prefix = prefix * nums[i];
//              cout<<prefix<<endl;
//             for(int j = 0 ; j < nums.size() ; j++)
//             {

//                 cout<<result[j] << " ";
//             }
//             cout<<endl;
//         }

//         int postfix = 1; cout<< " --------------- "<<endl;
//         for(int i = n - 1; i >= 0; i--)
//         {
//             result[i] = result[i] * postfix ;
//             postfix = postfix * nums[i];

//           for(int j = 0 ; j < nums.size() ; j++)
//             {
//                 cout<<result[j] << " ";
//             }
//             cout<<endl;
//         }

//         return result;
//     }
// };
