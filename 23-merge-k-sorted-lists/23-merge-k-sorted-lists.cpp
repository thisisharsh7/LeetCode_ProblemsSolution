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
    ListNode* merge(ListNode* a,ListNode* b){
        if(a==NULL and b==NULL){
            return NULL;
        }else if(a==NULL){
            return b;
        }else if(b==NULL){
            return a;
        }else{
            ListNode* rev;
            if(a->val<b->val){
                rev=a;
                rev->next=merge(a->next,b);
            }else{
                rev=b;
                rev->next=merge(a,b->next);
            }
            return rev;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }else{
            ListNode* ans;
            ListNode* c=NULL;
            for(int i=0;i<lists.size();i++){
                ListNode*a=lists[i];
                ans=merge(a,c);
                c=ans;
            }
            return ans;
        }
    }
};