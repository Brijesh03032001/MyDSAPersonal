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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>lo =  levelOrder(root);
        for(int i=0;i<lo.size();i++)
        {
            if(i%2!=0)
            {
                reverse(lo[i].begin(), lo[i].end());
            }

        }
        return lo;
    }
};