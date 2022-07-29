class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        string word;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                
                reverse(s.begin()+j,s.begin()+i);
                cout<<i<<" "<<j<<endl;
                j=i+1;
                cout<<j<<endl;
            }
        if(s[i+1]=='\0'){
            reverse(s.begin()+j,s.begin()+i+1);
        }
        }
        return s;
    }
};