class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        vector<int> nge(n);
        for (int i = n-1; i >= 0; i--){
        while (!s.empty() && s.top() <= nums[i]){
            s.pop();
        }
            
        if(s.empty()){
            nge[i]=-1;
        }else{
            nge[i]=s.top();
        }
        s.push(nums[i]);
        }
        for (int i = n-1; i >= 0; i--){
        if(nge[i] == -1){
            while (!s.empty() && s.top() <= nums[i]){
                s.pop();
            }

            if(s.empty()){
                nge[i]=-1;
            }else{
                nge[i]=s.top();
            }
        }
        s.push(nums[i]);
        }
        return nge;
    }
};