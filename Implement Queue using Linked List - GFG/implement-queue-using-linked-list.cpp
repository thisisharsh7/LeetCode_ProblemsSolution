//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }

// } Driver Code Ends


/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        if(rear == NULL || front==NULL){
            rear = new QueueNode(x);
            front = new QueueNode(x);
        }else{
            QueueNode*n = new QueueNode(x);
            n->next = rear;
            rear = n;
            QueueNode*tail = front;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            tail->next = new QueueNode(x);
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code  
        if(front==NULL){
            return -1;
        }else{
            int x = front->data;
            front = front->next;
            return x;
        }
}
