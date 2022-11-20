//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long  long sum = arr[0];
        int ptr1 = 0,ptr2=0;
        if(sum==s){
            return {1 , 1};
        }
        if(s<=0){
            return {-1};
        }
        while(ptr2<n-1){
            if(sum + arr[ptr2+1] <= s){
                sum+=arr[ptr2+1];
                ptr2++;
            }else{
                sum-=arr[ptr1];
                ptr1++;
            }
            if(sum == s){
                return {ptr1+1,ptr2+1};
            }
        }
        return {-1};
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends