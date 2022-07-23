class Solution {
    
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string> str ;
        for(auto it : nums){
            str.push_back(to_string(it));
        }
        
        sort(str.begin() , str.end() ,[](string a,string b){return a+b > b+a;});
        string ans = "";
        for(auto it :  str){
            ans += it;
        }
        
        return (ans[0]=='0') ? "0":ans; ;
    }
};