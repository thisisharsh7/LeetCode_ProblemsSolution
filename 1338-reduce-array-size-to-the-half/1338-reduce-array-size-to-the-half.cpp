class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int target=n/2;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<int> occ;
        for(auto it=m.begin();it!=m.end();it++){
            occ.push_back(it->second);
        }
        sort(occ.begin(),occ.end());
        int cnt=0;
        int sum=0;
        for(int i=occ.size()-1;i>=0;i--){
            sum+=occ[i];
            cnt++;
            if(sum>=target){
                break;
            }
        }
        return cnt;
        
        
    }
};