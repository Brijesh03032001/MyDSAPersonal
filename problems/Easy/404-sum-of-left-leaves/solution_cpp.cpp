/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int s(TreeNode* root)
    {
        int su=0;
        if(root==NULL)
        {
            return 0;
        }
        if(root->left)
        {
            if(root->left->left==NULL && root->left->right==NULL)
         {
            su= su + root->left->val + s(root->left);
         }
         else
         {
             su = su+ s(root->left);
         }
        }
        if(root->right)
        {
            su = su + s(root->right);
        }
        return su;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return s(root);
    }
};