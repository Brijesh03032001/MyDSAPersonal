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
    long long kthLargestLevelSum(TreeNode* root, int k) {
             vector<long long> vc;
             if(root == NULL)
             {
                return -1;
             }
             queue<TreeNode*> qu;
             qu.push(root);
             while(!qu.empty())
             {
                int n = qu.size();
                long long temp=0;
                for(int i=0;i<n;i++)
                {
                     TreeNode* q = qu.front();
                     qu.pop();
                     temp = temp + q->val;
                     if(q->left)
                     {
                        qu.push(q->left);
                     }
                     if(q->right)
                     {
                        qu.push(q->right);
                     }
                }
                vc.push_back(temp);
             }

             sort(vc.rbegin(), vc.rend());
             if(vc.size()<k) return -1;
             return vc[k-1];
    }
};