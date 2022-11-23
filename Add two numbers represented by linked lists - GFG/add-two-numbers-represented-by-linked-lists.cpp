//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node*prev = NULL;
        Node*c = first;
        Node*n;
        while(c!=NULL){
            n = c->next;
            c->next =prev;
            prev = c;
            c = n;
        }
        first = prev;
        
        
        prev = NULL;
        c = second;
        Node*n1;
        while(c!=NULL){
            n1 = c->next;
            c->next =prev;
            prev = c;
            c = n1;
        }
        second = prev;
        
        
        
        int k ;
        k = second->data + first->data;
        int carry =k/10;
        Node*head = new Node(k%10);
        Node*n2;
        while(second->next!=NULL && first->next!=NULL){
            
            second = second -> next;
            first = first -> next;
            k = carry + (second->data) + (first->data);
            carry = k/10;
            n2 = new Node(k%10);
            n2->next = head;
            head = n2;
            
        }
        while(first->next!=NULL){
            
            first = first->next;
            k = carry + first->data;
            carry = k/10;
            n2 = new Node(k%10);
            n2->next = head;
            head = n2;
        }
        while(second->next!=NULL){
            second=second->next;
            k = carry + second->data;
            carry = k/10;
            n2 = new Node(k%10);
            n2->next = head;
            head = n2;
        }
        if(carry!=0){
            k = carry;
            n2 = new Node(k%10);
            n2->next = head;
            head = n2;
        }
        
        
        return head;
       
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends