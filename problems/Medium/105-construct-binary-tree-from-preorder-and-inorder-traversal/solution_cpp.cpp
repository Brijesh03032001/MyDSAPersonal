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
    TreeNode* fun(vector<int> &p,vector<int> &in,int s,int e,int &i,unordered_map<int,int> &m){
        if(s>e)
            return NULL;
       
        int ele=p[i++];
        TreeNode* r=new TreeNode(ele);
        if(s==e)
            return r;
        int index=m[ele];
        
        r->left=fun(p,in,s,index-1,i,m);
        r->right=fun(p,in,index+1,e,i,m);
        
        return r;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        unordered_map<int,int>mp;
        for(int j=0;j<inorder.size();j++)
        {
            mp[inorder[j]]=j;
        }
        int in=0;
        return fun(preorder,inorder,0,inorder.size()-1,in,mp);
        
    }
};