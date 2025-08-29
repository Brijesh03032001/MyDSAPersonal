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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == NULL) return res;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty())
        {
            vector<int>temp;
            int n = que.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node = que.front();
                que.pop();
                if(node->left != NULL) que.push(node->left);
                if(node->right != NULL) que.push(node->right);
                temp.push_back(node->val);
            }
            res.push_back(temp);
        }
        return res;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> lo = levelOrder(root);
        vector<int>ans ;
        for(int i=0;i<lo.size();i++)
        {
            int last = lo[i][lo[i].size()-1];
                        ans.push_back(last);
        }
        return ans;
    }
};