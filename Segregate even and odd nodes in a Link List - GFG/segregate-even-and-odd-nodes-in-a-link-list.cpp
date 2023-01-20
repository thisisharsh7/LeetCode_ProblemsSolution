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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        if(head==NULL){
            return NULL;
        }
        Node* even = new Node(0);
        Node* odd = new Node(0);
        Node* even1 = even;
        Node* odd2 = odd;
        while(head!=NULL){
            int k = head->data;
            Node* temp = new Node(k);
            if(k%2==0){
                while(even1->next!=NULL){
                    even1 = even1->next;
                }
                even1->next = temp;
            }else{
                while(odd2->next!=NULL){
                    odd2 = odd2->next;
                }
                odd2->next = temp;
            }
            head = head->next;
        }
        if(even->next==NULL){
            return odd->next;
        }
        if(odd->next==NULL){
            return even->next;
        }
        even1->next->next = odd->next;
        return even->next;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends