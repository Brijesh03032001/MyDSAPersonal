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
    void io(TreeNode* root , vector<int>&vc)
    {
        if(root==NULL)
        {
            return ;
        }
        io(root->left,vc);
        vc.push_back(root->val);
        io(root->right,vc);
        
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        io(root,ans);
        int su=INT_MAX;
        for(int i=0;i<ans.size()-1;i++)
        {
            int diff= ans[i+1] - ans [i];
            if(diff<su)
            {
                su=diff;
            }
        }
        return su;
        
    }
};