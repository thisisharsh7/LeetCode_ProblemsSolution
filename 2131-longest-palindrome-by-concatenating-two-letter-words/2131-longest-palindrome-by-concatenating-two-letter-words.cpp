class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> um;
        int cnt=0;
        
        for(int i=0;i<words.size();i++){
            swap(words[i][0],words[i][1]);
            if(um[words[i]]>0){
                cnt+=4;
                um[words[i]]--;
            }
            else{
                swap(words[i][0],words[i][1]);
                um[words[i]]++;
            }
        }
        
        for(auto it:um){
            if(it.second>0 && it.first[0]==it.first[1]){
                cnt+=2;
                break;
            }
        }
        
        return cnt;  
    }
};