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
    ListNode* swapPairs(ListNode* head) {
        if (head== nullptr || head->next== nullptr){
            return head;
        }
        ListNode* curr=head;
        ListNode* next=head->next;
        curr->next= next->next;
        next->next= curr;
        
        ListNode* ansHead= next;
         ListNode* prev= curr;
        
        while(curr!= nullptr || curr->next!= nullptr){
            curr= curr->next;
            if (curr== nullptr || curr->next== nullptr){
                break;
            }
            ListNode* temp= curr->next;//second node
            prev->next= temp;//making prev point to second node 
            curr->next= temp->next;//pointing to third node
            temp->next= curr;//pointing to first node
            
            prev= curr;
            
        }
        return ansHead;
    }
};