class Solution {
public:
    void recSolve(vector<string>& s,string p,int open,int close){
        if(open==0 && close==0){
            s.push_back(p);
        }
        if(open>0){
            recSolve(s,p+'(',open-1,close+1);//opening bracket
        }
        if(close>0){ 
            recSolve(s,p+')',open,close-1);//closing bracket
        }
        }
    
    vector<string> generateParenthesis(int n) { 
        vector<string> s;
        recSolve(s,"",n,0);
        return s;
    }
};