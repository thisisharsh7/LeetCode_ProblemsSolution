class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        
        for(int i =1 ; i < n ; i++){
            if(arr[i-1] > arr[i]){
                cnt++;
            }
        }
        if(arr[n-1] > arr[0]){
            cnt++;
        }
        return cnt<=1;
    }
};