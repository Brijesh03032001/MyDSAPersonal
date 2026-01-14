/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   
       ListNode *detectCycle(ListNode *head) {
         
        if(head==NULL || head->next==NULL) return NULL;   
        ListNode* slow = head, *fast = head;
        bool flag = false;
        while(fast->next and fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                flag = true;
                break;
            }
        }
        if(flag){
        slow = head;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next; 
        }
            return slow;
        }
        return NULL;
    }
};