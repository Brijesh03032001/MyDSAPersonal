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
    vector<vector<int>> lo (TreeNode* root)
    {
      vector<vector<int>>vc;
      if(root==NULL)
      {
        return vc;
      }
      queue<TreeNode*> qu;
      qu.push(root);
      while(!qu.empty())
      {
        int n= qu.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
          TreeNode* t= qu.front();
          qu.pop();
          ans.push_back(t->val);
          if(t->left)
          {
            qu.push(t->left);
          }
          if(t->right)
          {
            qu.push(t->right);
          }
        }
        vc.push_back(ans);
      }
      return vc;
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> vc= lo(root);
        int le= vc.size();
        long long su=0;
        for(int i=0;i<vc[le-1].size();i++)
        {
          su+=vc[le-1][i];
        }
      return int(su);
    }
};