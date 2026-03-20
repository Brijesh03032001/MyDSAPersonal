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
    
    TreeNode* insert(TreeNode* root , int v)
    {
        if(root==NULL)
        {
            TreeNode* ro= new TreeNode(v);
            return ro;
        }
        if(root->val==v)
        {
            return root;
        }
        if(root->val >v)
        {
            root->left = insert(root->left,v);
            
        }
        if(root->val < v)
        {
            root->right = insert(root->right,v);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
      TreeNode* root= new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++)
        {
            root= insert(root,preorder[i]);
        }
        return root;
        
    }
};