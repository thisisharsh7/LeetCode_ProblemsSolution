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
        int l=length(head);
        if(l==1 and n==1){
            return NULL;
        }else if(l==1 and n>1){
            return head;
        }else if(n==l){
            ListNode*temp=head->next;
            delete head;
            head=temp;
            return head;
        }
        int p=l-n+1;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(p-1){
            prev=temp;
            temp=temp->next;
            p--;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};