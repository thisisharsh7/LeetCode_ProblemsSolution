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
    
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }else{
            ListNode* shead=head->next;
            ListNode* odd=head;
            ListNode* even=head->next;
            while(odd->next!=NULL and even->next!=NULL){
                odd->next=odd->next->next;
                even->next=even->next->next;
                odd=odd->next;
                even=even->next;
            }
            odd->next=shead;
            return head;
        }
    }
};
 // if(head==NULL){
 //            return head;
 //        }
 //        ListNode* secondhead = head->next;
 //        ListNode* ptr1 = head;
 //        ListNode* ptr2 = head->next;
 //        while(ptr1->next!=NULL && ptr2->next!=NULL){
 //            ptr1->next=ptr1->next->next;
 //            ptr2->next=ptr2->next->next;
 //            ptr1=ptr1->next;
 //            ptr2=ptr2->next;
 //        }
 //        ptr1->next=secondhead;
 //        return head;