class Solution {
public:
    //two pointer
    // void reverse(vector<char> &s){
    //     int i=0;
    //     int j=s.size()-1;
    //     while(i<=j){
    //         swap(s[i],s[j]);
    //         i++;
    //         j--;
    //     }
    //     return;
    // }
    //two pointer recursion
    void reverse(vector<char> &v,int s,int e){
        if(s>e){
            return;
        }
        swap(v[s++],v[e--]);
        reverse(v,s,e);
    }
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};