class Solution {
public:
    bool possible(vector<int> arr,int n,int el,int m,int k){
    
        int cnt = 0;
        int b = 0;
        for(int i = 0 ; i < n ; i++ ){
            if(arr[i] <= el){
                cnt++;
            }else{
                b += (cnt/k);
                cnt = 0;
            }
        }
        b += (cnt/k);
        if(b>=m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        if(m*1ll*k*1ll > n){
            return -1;
        }
        
        int mini = INT_MAX, maxi = INT_MIN;
        
        for(int i = 0 ; i < n ; i++ ){
            mini = min(bloomDay[i],mini);
            maxi = max(bloomDay[i],maxi);
        }
        
        
        while(mini <= maxi){
            int mid = (mini+maxi)/2;
            
            if(possible(bloomDay,n,mid,m,k)){
                maxi = mid - 1;
            }else{
                mini = mid + 1;
            }
        }
        
        return mini;
    }
};