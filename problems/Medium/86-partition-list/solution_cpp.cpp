class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *head_lo=new ListNode(0),*lo=head_lo;
        ListNode *head_hi=new ListNode(0),*hi=head_hi;
        while(head){
            if(head->val<x){
                lo->next=head;
                lo=head;
            }
            else{
                hi->next=head;
                hi=head;
            }
            head=head->next;
        }
        hi->next=NULL;
        lo->next=head_hi->next;
        return head_lo->next;
    }
};