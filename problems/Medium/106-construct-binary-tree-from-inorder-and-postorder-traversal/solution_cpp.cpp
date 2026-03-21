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
    TreeNode* solve(vector<int> in, vector<int> post, int i, int j , int &idx ,unordered_map<int,int>&mp)
    {
        if(i > j) return NULL;
        int ele = post[idx++];
        int mid = mp[ele];
        TreeNode* res = new TreeNode(ele);
        if(i == j) return res;
        
        res->right = solve(in, post, mid + 1, j,idx,mp);  //Code interchanged because of reverse function
        res->left = solve(in, post, i, mid - 1,idx,mp);
        
        return res;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
       for(int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        int in=0;
        reverse(postorder.begin(), postorder.end());   //Code changed
        int n = inorder.size();
        TreeNode* x = solve(inorder, postorder, 0, n - 1,in,mp);  
        reverse(postorder.begin(), postorder.end());    //Since postorder is passed by reference, so it is a good practice to make the vector unchanged by reversing it again
        return x;
    }
};