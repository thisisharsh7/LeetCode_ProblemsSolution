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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*length=head;
        if(head==NULL){
            return head;
        }
        int cnt=1;
        while(length->next!=NULL){
            length=length->next;
            cnt++;
        }
        cout<<cnt<<endl;
        int reach=cnt-n;
        if(reach==0){
            ListNode*temp=head->next;
            delete head;
            head=temp;
            return head;
        }
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(reach--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};