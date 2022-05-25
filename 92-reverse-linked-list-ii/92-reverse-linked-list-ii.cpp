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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
            ListNode*c=head;
            ListNode*dummy=new ListNode(0, head);
            ListNode*lprev=dummy;
            int size=right-left+1;
            while(--left){
                lprev=c;
                c=c->next;
            }
            ListNode*prev=NULL;
            ListNode*n;
            while(c and size--){
                n=c->next;
                c->next=prev;
                prev=c;
                c=n;
            }
            lprev->next->next = c;
            lprev->next = prev;
            return dummy->next;
   
    }
};
// ListNode* reverseBetween(ListNode* head, int left, int right) {
//     ListNode *dummy = new ListNode(0, head);
//     ListNode *leftPrev  = dummy, *curr = head;
//     int size = right - left + 1;

//     while(--left){
//         leftPrev = curr;
//         curr = curr->next;
//     }
//     ListNode *prev = NULL, *nex;
//     while(curr && size--){
//         nex = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nex;
//     }
//     leftPrev->next->next = curr;
//     leftPrev->next = prev;
//     return dummy->next;
// }