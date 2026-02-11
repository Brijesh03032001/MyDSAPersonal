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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
          return 0;
        }
      //if(root->right==NULL && root->left==NULL)
      int a1=1,a2=1;
      if(root->left)
      {
        a1= 1 + maxDepth(root->left);
      }
      if(root->right)
      {
        a2= 1 + maxDepth(root->right);
      }
      return max(a1,a2);
    }
};