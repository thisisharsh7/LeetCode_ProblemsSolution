//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int ans = -1;
        if(n==1){
            return 1;
        }else if(n==2){
            return ans;
        }else{
            long long sl = 0;
            long long sr = 0;
            int i = 0;
            int j = n-1;
            while(i<j){
                if(sl<=sr){
                    sl += a[i];
                    i++;
                }else if(sr<sl){
                    sr += a[j];
                    j--;
                }
            }
            if(sl==sr){
                ans = i+1;
            }
        }
        return ans;
        // Your code here
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends