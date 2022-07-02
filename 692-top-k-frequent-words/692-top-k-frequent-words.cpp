class Solution {
public:
     static bool cmp(pair<int,string>&a,pair<int,string>&b){
        if(a.first==b.first){
            return a.second<b.second;}
        return a.first>b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>m;
        for(int i=0;i<words.size();++i){
            m[words[i]]++;
        }
        vector<pair<int,string>> vp;
        for(auto it:m){
            vp.push_back(make_pair(it.second,it.first));
        }
        sort(vp.begin(),vp.end(),cmp);
            vector<string> ans;
        for(int i=0;i<k;i++){
            ans.emplace_back(vp[i].second);
        }
        return ans;
    }
};