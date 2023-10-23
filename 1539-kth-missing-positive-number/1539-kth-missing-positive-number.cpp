class Solution {
public:
    
    bool check(vector<int> arr,int t,int n){
        
        int low = 0;
        int high = n - 1;
        while( low <= high ){
            int mid = (low + high)/2;
            if(arr[mid] == t){
                return false;
            }
            if( arr[mid] > t ){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return true;
    }
    
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 1;
        int high = arr[n-1];
        int cnt = 0;
        for(int i = low ; i <= high ; i++ ){
            if(check(arr,i,n)){
                cnt++;
            }
            if(cnt == k){
                return i;
            }
        }
        return arr[n-1] + k - cnt;
    }
};