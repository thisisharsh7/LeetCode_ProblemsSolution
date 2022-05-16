class Solution {
public:
        int myAtoi(string s) {
            stringstream ans(s);
            int k=0;
            ans>>k;

            return k;
            
        }
};