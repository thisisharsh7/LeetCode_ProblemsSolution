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
        if(l1==NULL){
            return l2;
        }else if(l2==NULL){
            return l1;
        }
        ListNode* l3=NULL;
        ListNode* temp;
        ListNode* prev=NULL;
        int carry=0;
        
        while(l1!=NULL or l2!=NULL){
            int add=(l1?(l1->val):0) + (l2?(l2->val):0) + carry;
            carry=(add>=10)?1:0;
            add=add%10;
            temp=new ListNode(add);
            if(l3==NULL){
                l3=temp;
            }else{
                prev->next=temp;
            }
            prev=temp;
            if(l1!=NULL){
                l1=l1->next;
            }if(l2!=NULL){
                l2=l2->next;
            }
        }
        if(carry>0){
            temp->next=new ListNode(carry);
        }
        return l3;
    }
};