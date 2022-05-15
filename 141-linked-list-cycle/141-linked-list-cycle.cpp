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
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return false;
        }else{
            ListNode*fast=head->next;
            ListNode*slow=head;
            while(fast!=slow and fast!=NULL and fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
            }
            if(fast==slow){
                return true;
            }else{
                return false;
            }
        }
    
    }
};