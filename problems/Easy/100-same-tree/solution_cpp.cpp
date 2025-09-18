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
    void iop(TreeNode* root,vector<int> &io_p)
    {
        if(root==NULL)
        {
            io_p.push_back(100000);
            return;
        }
        iop(root->left,io_p);
        io_p.push_back(root->val);
        iop(root->right,io_p);
        
    
        
    }
     void io(TreeNode* root,vector<int> &io_q)
    {
        if(root==NULL)
        {
             io_q.push_back(100000);
            return;
        }
        io(root->left,io_q);
        io_q.push_back(root->val);
        io(root->right,io_q);
        
    
        
    }
     void pop(TreeNode* root,vector<int> &po_p)
    {
        if(root==NULL)
        {
             po_p.push_back(100000);
            return;
        }
          po_p.push_back(root->val);
        pop(root->left,po_p);
       
        pop(root->right,po_p);
        
    
        
    }
     void qop(TreeNode* root,vector<int> &po_q)
    {
        if(root==NULL)
        {
             po_q.push_back(100000);
            return;
            
        }
          po_q.push_back(root->val);
        qop(root->left,po_q);
       
        qop(root->right,po_q);
        
    
        
    }
    
    
        
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>inoP;
        vector<int>inoQ;
        vector<int>preP;
        vector<int>preQ;
        iop(p,inoP);
        io(q,inoQ);
        qop(p,preP);
        qop(q,preQ);
        int flag=0;
        if(inoP.size()==inoQ.size())
        {
            int le=inoP.size();
            for(int i=0;i<le;i++)
            {
                if(inoP[i]!=inoQ[i])
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        if(preP.size()==preQ.size())
        {
            int len=preP.size();
            for(int i=0;i<len;i++)
            {
                if(preP[i]!=preQ[i])
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        return true;
        
    }
};