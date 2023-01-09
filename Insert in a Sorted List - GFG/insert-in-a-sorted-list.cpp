//{ Driver Code Starts
//

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
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
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

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* n = new Node(data);
        if(data <= head->data){
            n->next = head;
            return n;
        }
        if(head->next==NULL){
            head->next = n;
            return head;
        }
        Node* slow = head;
        Node* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            if(data>=slow->data && data<fast->data){
                slow->next = n;
                n->next = fast;
                return head;
            }
            slow = slow->next;
            fast = fast->next;
        }
        if(data>=slow->data && data<fast->data){
                slow->next = n;
                n->next = fast;
                return head;
        }
        fast->next = n;
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
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends