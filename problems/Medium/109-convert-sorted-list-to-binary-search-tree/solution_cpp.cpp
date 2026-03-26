/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* ino(vector<int>num , int f ,int l)
    {
        if(f>l)
        {
            return NULL;
        }
        int mid= (f+l)/2;
        TreeNode* root= new TreeNode(num[mid]);
        root->left=ino(num,f,mid-1);
        root->right=ino(num,mid+1,l);
        return root;
        
    }
    void ltov(vector<int>&num , ListNode* head )
    {
        ListNode* temp=head;
        while(temp!=NULL)
        {
            num.push_back(temp->val);
            temp=temp->next;
        }
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>arr;
        ltov(arr,head);
        return ino(arr,0,arr.size()-1);
        
    }
};