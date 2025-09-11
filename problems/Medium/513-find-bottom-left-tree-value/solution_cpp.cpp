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
    vector<vector<int>> lo(TreeNode* root)
    {
        vector<vector<int>>res;
        if(root==NULL)
        {
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            
            vector<int>an;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                an.push_back(temp->val);
                q.pop();
                
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            res.push_back(an);
        }
        return res;
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>>res;
        res=lo(root);
        if(res.size()!=0)
        {
        return res[res.size()-1][0];
        }
        else
        {
            return 0;
        }
    }
};