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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || k==1) return head;
        ListNode* dummy= new ListNode(0);
        dummy->next=head; 
        ListNode* pre = dummy;
        ListNode* curr= dummy;
        ListNode* nex = dummy;
        ListNode* temp= head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        
        while(c>=k)
        {
            curr= pre->next;
            nex= curr->next;
            for(int i=0;i<k-1;i++)
            {
            curr->next = nex->next;
            nex->next= pre->next;
            pre->next= nex;
            nex= curr->next;
            }
            pre= curr;
            c-=k;
        }
        return dummy->next;
        
    }
};