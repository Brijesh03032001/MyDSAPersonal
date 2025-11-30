class Solution {
public:
   int mi(TreeNode* root)
   {
       if(root==NULL)
       {
           return 0;
       }
       if(root->left==NULL && root->right==NULL)
       {
           return 1;
       }
      if(root->left==NULL){
         return 1+ mi(root->right);
      }
       if(root->right==NULL){
           return 1+ mi(root->left);
       }
           return 1+ min(mi(root->left),mi(root->right));
       
   }
    int minDepth(TreeNode* root) {
       
            return mi(root);
       
           }
};