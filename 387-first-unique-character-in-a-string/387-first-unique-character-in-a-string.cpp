class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int> m;
        queue<int> q;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            q.push(i);
        }
        for(int i=0;i<n;i++){
            if(m[s[q.front()]]==1){
                break;
            }
            q.pop();
        }
        return q.empty() ? -1 : q.front();
    }
};