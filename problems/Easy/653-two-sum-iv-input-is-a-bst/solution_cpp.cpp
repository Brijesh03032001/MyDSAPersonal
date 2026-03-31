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
    void io(TreeNode* root, vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        io(root->left,ans);
        ans.push_back(root->val);
        io(root->right,ans);
        
        
    }
    bool findTarget(TreeNode* root, int k) {
      vector<int>ans;
        io(root,ans);
        int p2=ans.size()-1;
        int p1=0;
        while(p1<p2)
        {
            if(ans[p1]+ans[p2]<k)
            {
                p1++;
            }
            else if( ans[p1]+ans[p2]>k)
            {
                p2--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};