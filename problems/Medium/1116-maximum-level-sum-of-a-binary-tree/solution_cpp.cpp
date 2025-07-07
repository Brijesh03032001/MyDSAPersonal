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
    int maxLevelSum(TreeNode* root) {
       int ans = INT_MIN;
       int level =0;
       if(root == NULL)
       {
        return 0;
       }    
       queue<TreeNode*> qu;
       qu.push(root);
       int l =0;
       while(!qu.empty())
       {
          int n= qu.size();
          int temp =0;
          for(int i=0;i<n;i++)
          {
            TreeNode* to = qu.front();
            qu.pop();
            temp+= to->val;
            if(to->left)
            {
                qu.push(to->left);
            }
            if(to->right)
            {
               qu.push(to->right);
            }
            
          }
          l++;
          if(ans < temp)
          {
            level = l;
            ans = temp;
          }
       }
       return level;
    }
};