class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string first = "qwertyuiop";
        string second = "asdfghijkl";
        string third = "zxcvbnm";

        for(int i = 0;i<words.size();i++){
            bool b1 = true;
            bool b2 = true;
            bool b3 = true;
           for(int j = 0 ; j<words[i].length(); j++){
               if(b1){
                   if(first.find(tolower(words[i][j]))<first.length()){
                       b2 = false;
                       b3 = false;
                   }else{
                       b1 = false;
                   }
               }else if(b2){
                   if(second.find(tolower(words[i][j]))<second.length()){
                       b1 = false;
                       b3 = false;
                   }else{
                       b2 = false;
                   }
               }else if(b3){
                   if(third.find(tolower(words[i][j]))<third.length()){
                       b1 = false;
                       b2 = false;
                   }else{
                      b3 = false;
                   }
               }else{
                  break;
               }
           }
            if(b1 || b2 || b3){
                ans.push_back(words[i]);
            }
   
        }
        return ans;
    }
};