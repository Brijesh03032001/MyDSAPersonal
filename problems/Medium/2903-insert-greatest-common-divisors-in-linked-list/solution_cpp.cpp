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
    int gcd(int a, int b){
        return b==0? a:gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp2){
            int a = temp2->val;
            int b = temp1->val;
            int c = gcd(a, b);
            
            ListNode* node = new ListNode(c);
            
            node->next = temp2;
            temp1-> next = node;
            
            temp1 = temp2;
            temp2=temp2->next;
        }
        return head;
    }
};