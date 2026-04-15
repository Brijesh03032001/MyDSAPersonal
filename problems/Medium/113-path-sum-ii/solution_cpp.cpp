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
    void an(vector<vector<int>>&res , vector<int>&path, TreeNode* root, int ta)
    {
        if(root == NULL) return ;
        path.push_back(root->val);
        if(ta- root->val == 0 && ((root->left == NULL) &&  (root->right == NULL)))
        {
            
            res.push_back(path);
            
        }
        an(res,path, root->left, ta - root->val);
        an(res, path, root->right, ta - root->val);
        path.pop_back();
        return ;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int>path;
        an(res, path, root, targetSum);
        return res;
    }
};