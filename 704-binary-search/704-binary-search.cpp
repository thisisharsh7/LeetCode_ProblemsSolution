class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]>target){
                j--;
            }else{
                i++;
            }
        }
        return -1;
    }
};