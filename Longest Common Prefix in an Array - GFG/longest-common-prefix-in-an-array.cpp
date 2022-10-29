//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string s = "";
        int maxL = INT_MAX;
        for(int i = 0 ; i <N ; i++){
            if(arr[i].length()<maxL){
                maxL = arr[i].length();
            }
        }
        for(int j = 0 ; j<maxL ; j++){
        
            bool c = true;
            for(int i = 0 ;i <N-1 ;i ++){
                if(arr[i][j]!=arr[i+1][j] || arr[i][0]!=arr[i+1][0]){
                    c = false;
                }
                
            }
            if(c){
                s += arr[0][j];
            }
        }
        if(s != ""){
            return s;
        }else{
            return "-1";
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends