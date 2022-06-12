class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l;
        vector<int> r;
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                p.push_back(nums[i]);
            }else if(nums[i]>pivot){
                r.push_back(nums[i]);
            }else{
                l.push_back(nums[i]);
            }
        }
        int le=l.size();
        int re=r.size();
        int pe=p.size();
        int j=0;
        int lep=le+pe;
        int lepr=le+pe+re;
        l.resize(lep);
        for(int i=le;i<lep;i++){
            l[i]=p[j];
        }
        l.resize(lepr);
        j=0;
        for(int i=lep;i<lepr;i++){
            l[i]=r[j++];
        }
        return l;
    }
};