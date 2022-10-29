//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> um;
        vector<int> p_sum(n+1,0);
        for(int i = 0 ;i < n;i ++){
            p_sum[i+1] = p_sum[i]+ A[i];
        }
        int ans = 0;
        for(int i = 1 ; i<=n ;i++){
            if(p_sum[i]==0){
                ans = max(ans , i);
            }else{
                if(um[p_sum[i]]!=0){
                    ans = max(ans , i - um[p_sum[i]]);
                }else{
                    um[p_sum[i]] = i;
                }
                    
            }

        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends