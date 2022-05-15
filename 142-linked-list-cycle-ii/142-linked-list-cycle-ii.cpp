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
        if(head==NULL or head->next==NULL){
            return NULL;
        }else{
            ListNode*fast=head;
            ListNode*slow=head;
            while(fast!=NULL and fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
                if(slow==fast){
                    fast=head;
                    if(slow==fast){
                        return fast;
                    }else{
                        while(fast->next!=slow->next){
                            fast=fast->next;
                            slow=slow->next;
                        }
                        return slow->next;
                    }
                }
            }
            return NULL;
            
            
        }
    }
};