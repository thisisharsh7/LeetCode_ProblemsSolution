//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

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


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    // Your Code
    if(s2.empty()){
        //3
        s2.push(x);//
    }else{
        while(!s2.empty()){
            s1.push(s2.top());//3 4
            s2.pop();
        }
        s1.push(x);//3 4 5
        while(!s1.empty()){
            s2.push(s1.top());//5 4 3 
            s1.pop();
        }
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code  
        if(s2.empty()){
            return -1;
        }else{
            int k = s2.top(); 
            s2.pop();
            return k;
        }
}
