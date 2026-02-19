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
    int widthOfBinaryTree(TreeNode* root) {
      
      int ans=0;
      if(root==NULL)
      {
        return ans;
      }
      queue<pair<TreeNode* , int>>qu;
      qu.push({root,0});
      while(!qu.empty())
      {
        int n= qu.size();
        int f, l;
        //int mi= qu.front().second;
        for(int i=0;i<n;i++)
        {
          TreeNode* t= qu.front().first;
          long long int in= qu.front().second;
          qu.pop();
          if(i==0) f= in;
          if(i==n-1) l=in;
          if(t->left)
          {
            long long r= 2*in +1;
            qu.push({t->left,r});
          }
          if(t->right)
          {
            long long r= 2*in +2;
            qu.push({t->right,r});
          }
          
        }
        ans= max ( ans , l-f+1);
      }
      return ans;
    }
};