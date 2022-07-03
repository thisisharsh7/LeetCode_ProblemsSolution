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
     int length(ListNode *head){
        int cnt=0;
       while(head!=NULL){
           cnt++;
           head=head->next;
          }
        return cnt;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL ||head->next==NULL || k==0){
           return head;
       }
        
        int len=length(head);
        ListNode* slow=head;
        ListNode *fast=head;
        ListNode*prev=NULL;
        if(k%len==0){
            return head;
        }
        for(int i=0;i<k%len;i++){
            fast=fast->next;
           
        }
        
        while(fast!=NULL ){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;
        ListNode*temp=slow;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return slow;
        
    }
};