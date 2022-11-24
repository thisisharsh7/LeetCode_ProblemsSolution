//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        int n = s.length();
        stack<char> st;
        for(int i = 0 ; i<n ;i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='[' || st.empty()){
                st.push(s[i]);
            }else if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                if(st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends