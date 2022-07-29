class Solution {
public:
    void reverse(vector<char> &s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return;
    }
    void reverseString(vector<char>& s) {
        reverse(s);
    }
};