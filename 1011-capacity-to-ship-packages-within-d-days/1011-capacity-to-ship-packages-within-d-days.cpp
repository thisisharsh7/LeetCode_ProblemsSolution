class Solution {
public:
    int minimumWeightage(vector<int> v,int t){
        int n = v.size();
        int w = 0;
        int cnt_days = 0;
        for(int i = 0 ; i < n ; i++ ){
            w += v[i];
            if(w>=t){
               if(w==t){
                   w = 0;
               }else{
                   w = v[i];
               }
                cnt_days += 1;
            }
        }
        if(w && w<=t){
                cnt_days += 1;
        }
        return cnt_days;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(),weights.end());
    
        int high = accumulate(weights.begin(),weights.end(),0);
        
        while(low<=high){
            int mid = (low + high)/2;
            if(minimumWeightage(weights,mid)<=days){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};