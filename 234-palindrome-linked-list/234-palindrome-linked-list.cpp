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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode*prev=NULL;
        ListNode*c=head;
        ListNode*n;
        while(c!=NULL){
            n=c->next;
            c->next=prev;
            prev=c;
            c=n;
        }
        head=prev;
        return head;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return false;
        }if(head->next==NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next!= NULL and fast->next->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* reversed = reverseLinkedList(slow->next);
        ListNode* curr = head;
        while(reversed != NULL){
            if(curr->val != reversed->val){
                return false;
            }
            curr = curr->next;
            reversed = reversed->next;
        }
        
        return true;
    }
};