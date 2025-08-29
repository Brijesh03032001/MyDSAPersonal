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
    vector<double> lo(TreeNode* root)
    {
       vector<double>res;
        if(root == NULL) return res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            double ans = 0;
            int n = que.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node = que.front();
                ans+= node->val;
                que.pop();
                if(node->left!= NULL) que.push(node->left);
                if(node->right != NULL) que.push(node->right);
            }
            double fi = double(ans)/double(n);
            res.push_back(fi);


        }
        return res;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        return lo(root);

        
    }
};