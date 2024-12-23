// https://leetcode.com/problems/binary-tree-inorder-traversal/description/?envType=problem-list-v2&envId=tree

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     void InOrder(TreeNode* root , vector<int>& temp)
//     {
//         if(root == NULL)
//         {
//             return;
//         }

//         InOrder(root->left , temp);
//         temp.push_back(root->val);
//         InOrder(root->right , temp);
//     }

//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>temp;
//         InOrder(root , temp);
//         return temp;
//     }
// };