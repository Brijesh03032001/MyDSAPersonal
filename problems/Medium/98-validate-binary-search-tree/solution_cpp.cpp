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
    void in(TreeNode* root ,vector<int>&su)
    {
        if(root==NULL)
        {
            return ;
        }
        in(root->left,su);
        su.push_back(root->val);
        in(root->right,su);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>su;
        in(root,su);
        int le=su.size();
        for(int i=0;i<le-1;i++)
        {
            if(su[i]>=su[i+1])
            {
                return false;
            }
        }
        return true;
    }
    
};