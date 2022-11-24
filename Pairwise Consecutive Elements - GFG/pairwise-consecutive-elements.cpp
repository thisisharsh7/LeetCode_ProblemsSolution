//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    stack<int>k;
    while(!s.empty()){
        if(k.empty()){
            k.push(s.top());
            s.pop();
        }else{
            if(abs(s.top()-k.top())==1){
                k.pop();
                s.pop();
            }else{
                return false;
            }
        }
    }
    return true;
}