class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){ 
            return strs[0];
        }
        
        int sans=INT_MAX;
        bool flag=true;
        string ans;
        
        for(auto str : strs){
            if(sans>str.length()){
                sans=str.length();
            }
        }
        
        while(sans!=0){
            flag=true;
            for(int i=0;i<strs.size()-1;i++){
                if(strs[i].substr(0, sans) != strs[i + 1].substr(0, sans))                  {
                    flag=false;
                    break;
                }
            }
            if(flag){
                return strs[1].substr(0, sans);
            }
            sans--;
        }
        
        return ans; 
        
    }
};