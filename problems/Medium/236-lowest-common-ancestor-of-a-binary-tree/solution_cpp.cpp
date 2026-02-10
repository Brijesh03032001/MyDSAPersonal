/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool path(TreeNode* root, TreeNode* first, vector<int>&vc)
    {
      if(root==NULL)
      {
        return false;
      }
      if(root==first)
      {
        vc.push_back(root->val);
        return true;
      }
      if(path(root->left,first,vc))
      {
        vc.push_back(root->val);
        return true;
      }
      if(path(root->right,first,vc))
      {
        vc.push_back(root->val);
        return true;
      }
      return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int>p1;
        vector<int>p2;
        if(path(root,p,p1))
        {
          reverse(p1.begin(),p1.end());
        }
        if(path(root,q,p2))
        {
          reverse(p2.begin(),p2.end());
        }
      /*  for(auto i : p1)
        {
          cout<<i<<"**";
        }
      cout<<"\n";
      for(auto i: p2)
        
      {
        cout<<i<<"***";
      }
      */
      int lca=-1;
      for(int i=0; i<min(p1.size(),p2.size());i++)
      {
        if(p1[i]==p2[i])
        {
          
          lca= p1[i];
          
        }
        else
        {
          break;
        }
      }
      TreeNode* an= new TreeNode(lca);
      return an;
        
      
    }
};