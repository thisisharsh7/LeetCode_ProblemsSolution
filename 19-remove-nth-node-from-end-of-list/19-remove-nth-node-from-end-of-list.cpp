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
    int length(ListNode*head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL and n==1){
            return NULL;
        }
        // int l=length(head);
        // if(l==1 and n==1){
        //     return NULL;
        // }else if(l==1 and n>1){
        //     return head;
        // }
        // else if(n==l){
        //     ListNode*temp=head->next;
        //     delete head;
        //     head=temp;
        //     return head;
        // }
        
        // int p=l-n+1;
        // ListNode* prev=NULL;
        // ListNode* temp=head;
        // while(p-1){
        //     prev=temp;
        //     temp=temp->next;
        //     p--;
        // }
        // prev->next=temp->next;
        // delete temp;
        // return head;
        ListNode*fast=head;
        ListNode*slow=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        ListNode*prev=NULL;
        while(fast!=NULL){
            fast=fast->next;
            prev=slow;
            slow=slow->next;
           
        }
        if(prev==NULL){
            ListNode*temp=head->next;
            delete head;
            head=temp;
            return head;
        }
        prev->next=slow->next;
        delete slow;
        
        return head;
        
    }
};