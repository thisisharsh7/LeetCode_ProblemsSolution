class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            um[arr[i]]++;
            if(um[arr[i]]>1){
                return true;
            }
        }
        return false;
    }
};