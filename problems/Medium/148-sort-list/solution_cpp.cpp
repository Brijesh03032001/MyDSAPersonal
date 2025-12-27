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
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
        vector<int>arr;
        ListNode* temp= head;
        int c=0;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        if(arr.size()==0) return head;
        ListNode* h= new ListNode();
        ListNode* st= h;
        for(int i=0;i<arr.size();i++)
        {
            ListNode* t= new ListNode(arr[i]);
            st->next=t;
            st=st->next;
        }
        return h->next;
        
    }
    
};