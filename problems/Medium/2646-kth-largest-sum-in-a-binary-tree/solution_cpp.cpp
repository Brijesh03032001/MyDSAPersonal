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
            //  vector<long long> vc;
             priority_queue< long long , vector<long long> , greater<long long>> pq;

             if(root == NULL)
             {
                return -1;
             }
             queue<TreeNode*> qu;
             qu.push(root);
             int i=0;
             int level = 0;
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
                if(i<k)
                {
                    pq.push(temp);
                    i++;
                }
                else
                {
                    if(pq.top()< temp)
                    {
                        pq.pop();
                        pq.push(temp);
                    }
                }
                //vc.push_back(temp);
                level++;
             }

            //  sort(vc.rbegin(), vc.rend());
             if(level<k) return -1;
             return pq.top();
    }
};