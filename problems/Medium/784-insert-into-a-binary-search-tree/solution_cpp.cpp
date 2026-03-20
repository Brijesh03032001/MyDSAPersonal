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
    TreeNode* insert(TreeNode* root ,int v)
    { 
        
        if(root==NULL)
        {
            TreeNode* ro= new TreeNode(v);
            return ro;
        }
        if(root->val == v)
        {
            return root;
        }
        if(root->val < v)
        {
           root->right= insert(root->right,v);
        }
        if(root->val >v )
        {
            root->left= insert(root->left,v);
        }
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root,val);
    }
};