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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* tempResult = result;
        bool Carry = 0;
        
        while(l1|| l2){    
            if(l1 && l2){
                tempResult->val += l1->val + l2->val;
                l1=l1->next ;
                l2=l2->next ;

            }else if(l1 && !l2){
                 tempResult->val +=(l1->val );
                 l1=l1->next ;
            }else{
                 tempResult->val +=(l2->val );
                 l2=l2->next ;
            }   
            if(tempResult->val >= 10){
                    tempResult->val -=10 ;
                    Carry = 1; 
            }
            
            if(l1 || l2 || Carry){
                ListNode* node = new ListNode(0);
                tempResult->next = node ;
                tempResult = tempResult->next ;
                if(Carry)
                {
                        tempResult-> val = 1;
                        Carry= 0 ;
                }
            }
        }
        return result ;
    }

}; 