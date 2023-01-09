//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node*head){
        if(head->next==NULL){
            return head;
        }
        Node* shead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return shead;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding onehi
        
        Node* reHead = reverse(head);
        Node* sHead = reHead;
        while(reHead!=NULL){
            if(reHead->data<9){
            reHead->data = reHead->data + 1;
            return reverse(sHead);
            }
            reHead->data = 0;
            reHead = reHead->next;
        }
        Node* n = new Node(1);
        n->next = reverse(sHead);
        return n;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends