class Solution {
public:
    
    TreeNode* recoverFromPreorder(string preorder) {
        
        int sl = preorder.length();
        
        // maintain nodes of each depth in a list
        vector<TreeNode *>nodeList;
        
        int iter = 0;
        int preIter;
        int depth;
        int val;
        while(iter<sl)
        {
            // get depth of current node => # of - char
            preIter = iter;
            while(preorder[iter]=='-')iter++;
            depth = iter - preIter;
            
            // get value of the current node
            val = 0;
            while(iter<sl && preorder[iter]>='0' && preorder[iter]<='9')
            {
                val = val *10 + (preorder[iter]-'0');
                iter++;
            }
            
            // create tree node with value
            TreeNode * node = new TreeNode(val);
            
            // add node in to the node list of current depth, if list < depth then push node
            if(nodeList.size()==depth)nodeList.push_back(node);
            else nodeList[depth] = node;
            
            // only add node as child of depth-1 node from list if depth>0 as root has no child
            if(depth>0)
            {
                if(!nodeList[depth-1]->left)nodeList[depth-1]->left=node;
                else nodeList[depth-1]->right=node;
            }
        }
        
        // return root node
        return nodeList[0];
    }
};