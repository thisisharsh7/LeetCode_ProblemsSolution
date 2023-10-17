class Solution {
public:
    long long timeTakenByMid(vector<int> v,int mid){
        long long t_hour = 0;
        int n = v.size();
        for(int i = 0 ; i < n; i++){
            t_hour += ceil((double)(v[i]) / (double)(mid));
        }
        return t_hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            int mid = (low + high) / 2;
            long long speed = timeTakenByMid(piles,mid);
            if(speed <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};