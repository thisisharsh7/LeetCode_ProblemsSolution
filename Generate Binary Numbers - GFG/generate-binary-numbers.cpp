//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	stack<string> s;
	ans.push_back("1");
	for(int i = 2 ; i<=N ;i++){
	    string b = "";
	    int k =i;
	    while(k>0){
	        if(k%2){
	            s.push("1");
	        }else{
	            s.push("0");
	        }
	        k = k/2 ;
	    }
	    while(!s.empty()){
	        b += s.top();
	        s.pop();
	    }
	    ans.push_back(b);
	    
	}
	
	return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends