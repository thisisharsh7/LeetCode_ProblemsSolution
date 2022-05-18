class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1){
            return false;
        }
        stack<char> a;
        for(int i=0;i<s.length();i++){
            if(a.empty()){
                a.push(s[i]);
            }else if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                a.push(s[i]);
            }else if(a.top()=='(' and s[i]==')'){
                a.pop();
            }else if(a.top()=='{' and s[i]=='}'){
                a.pop();
            }else if(a.top()=='[' and s[i]==']'){
                a.pop();
            }else{
                return false;
            }
        }
        if(a.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
