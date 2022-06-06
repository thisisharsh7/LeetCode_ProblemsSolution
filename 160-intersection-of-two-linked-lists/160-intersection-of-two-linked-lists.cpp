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
    int lengthHead(ListNode* head){
        int cnt=0;
        while(head){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {  
        int lenA=lengthHead(headA);
        int lenB=lengthHead(headB);
        int skp=abs(lenA-lenB);
        while(skp and headB and lenA<lenB){
        headB=headB->next;//skipping the node;
        skp--;
        }
        while(skp and headA and lenB<lenA){
        headA=headA->next;//skipping the node;
        skp--;
        }
        
        while(headA!=headB and headA and headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
      }
};