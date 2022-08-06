class Solution {
public:
    int arr[46]={0};
    int climbStairs(int n) {
        if(arr[n-1]!=0 and arr[n-2]!=0){
            return arr[n-1] + arr[n-2];
        }
        if(n==1){
            arr[1]=1;
            return 1;
        }
        if(n==2){
            arr[2]=2;
            return 2;
        }
        int ans = climbStairs(n-1) + climbStairs(n-2);
        arr[n]= ans;
        return ans;
    }
};