class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string first = "qwertyuiop";
        string second = "asdfghijkl";
        string third = "zxcvbnm";

        for(int i = 0;i<words.size();i++){
            string s = "";
            int x = 1;
            int y = 2;
            int z = 3;
           for(int j = 0 ; j<words[i].length(); j++){
               if(first.find(tolower(words[i][0]))<first.length() && x!=0){
                   if(first.find(tolower(words[i][j]))<first.length()){
                   s+=words[i][j];
                   }else{
                       break;
                   }
                   z=0;
                   y=0;
               }else if(second.find(tolower(words[i][0]))<second.length() && y!=0){
                   if(second.find(tolower(words[i][j]))<second.length()){
                   s+=words[i][j];
                   }else{
                       break;
                   }
                   x=0;
                   z=0;
               }else if(third.find(tolower(words[i][0]))<third.length() && z!=0){
                   if(third.find(tolower(words[i][j]))<third.length()){
                   s+=words[i][j];
                   }else{
                       break;
                   }
                   x= 0;
                   y=0;
               }else{
                  break;
               }
           }
            if(s.length() == words[i].length()){
                
                ans.push_back(s);
            }
   
        }
        return ans;
    }
};