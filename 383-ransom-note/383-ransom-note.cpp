class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=magazine.length();
        int n=ransomNote.length();
        int cnt=n;
        unordered_map<char,int> um;
        for(int i=0;i<n;i++){
            um[ransomNote[i]]++;
        }
        for(int i=0;i<m;i++){
            if(um[magazine[i]]>=1){
                um[magazine[i]]--;
                cout<<cnt<<endl;
                cnt--;
            }
        }
        if(cnt>0){
            return false;
        }
        return true;
        
    }
};