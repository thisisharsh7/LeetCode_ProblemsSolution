class Solution {
    
public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits==""){
//             return ans;
//         }
//         int i=0;
//         string out;
//         string words[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         solve(out,digits,ans,i,words);
//         return ans;
        
//     }
//         void solve(string out,string digits,vector<string> &ans,int i,string words[]){
//         if(i>=digits.length()){
//             ans.push_back(out);
//             return;
//         }
//         int number=digits[i]-'0';
//         string value=words[number];
//         for(int i=0;i<value.length();i++){
//             out.push_back(value[i]);
//             solve(out,digits,ans,i+1,words);
//             out.pop_back();
//         }
//     }
        vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits == "")
            return ans;
        int index = 0;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        pad(output, digits, ans, index, mapping);
        return ans;
    }
    void pad(string p, string up, vector<string>& ans, int index, string mapping[])
    {
     if(index >= up.length()){
         ans.push_back(p);
         return;
     }
        int digit = up[index] - '0';
        string value = mapping[digit];
        
        for(int i = 0; i < value.length(); i++)
        {
            p.push_back(value[i]);
            pad(p, up, ans, index+1, mapping);
            p.pop_back();
        }
    }
};
