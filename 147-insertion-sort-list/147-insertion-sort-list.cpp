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
    ListNode* insertionSortList(ListNode* head) {
             if (head == nullptr){
                 return nullptr;
             }
        int ans=0;
        ListNode* temp;
        ListNode* curr;
        for(temp=head;temp!=NULL;temp=temp->next){
            for(curr=head;curr!=temp;curr=curr->next){
                if(curr->val>temp->val){
                    int ans=curr->val;
                    curr->val=temp->val;
                    temp->val=ans;
                }
            }
        }
        return head;  
    }
};