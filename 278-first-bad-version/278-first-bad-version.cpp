// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int i=1;
        long int j=n;
        long int mid;
        long int ans;
        while(i<=j){
            mid=(i+j)/2;
            if(isBadVersion(mid)){
                j=mid-1;
                ans=mid;
            }else{
                i=mid+1;
            }
            
            // if(!(isBadVersion(j))){
            //     return j+1;
            // }else if(isBadVersion(i)){
            //     return i;
            // }else{
            //     j--;
            //     i++;
            // }
        }
        return ans;
    }
};