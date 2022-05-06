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
    void reverseLinkedList(ListNode*&L){
        ListNode* prev=NULL;
        ListNode* c=L;
        ListNode* n;
        while(c!=NULL){
            n=c->next;
            c->next=prev;
            prev=c;
            c=n;
        }
        L=prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverseLinkedList(l1);
        reverseLinkedList(l2);
        ListNode* l3=NULL;
        ListNode* prev=NULL;
        ListNode* temp;
        int carry=0;
        while(l1!=NULL or l2!=NULL){
            int add=carry+ (l1? l1->val:0)+ (l2? l2->val:0);
            carry=(add>=10)? 1:0;
            add=add%10;
            temp=new ListNode(add);
            if(l3==NULL){
                l3=temp;
            }else{
                prev->next=temp;
            }
            prev=temp;
            if(l1){
                l1=l1->next;
            }if(l2){
                l2=l2->next;
            }
        }
        if(carry>0){
            temp->next= new ListNode(carry);
        }
        reverseLinkedList(l3);
        return l3;
    }
};