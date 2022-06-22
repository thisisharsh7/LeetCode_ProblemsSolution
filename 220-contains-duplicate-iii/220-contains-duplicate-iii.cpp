class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        multimap <int,int> m;
        for(int i=0;i<nums.size();i++) m.insert(pair< int, int >(nums[i], i));
        
        multimap <int,int>::iterator it, itnext;
        
        for(it=m.begin();it!=m.end();it++){
            itnext = it;
            while(true){
                itnext++;
                if(itnext == m.end()) break;
                long long a = (*it).first;
                long long b = (*itnext).first;
                if( b - a <= t)  {if(abs((*it).second - (*itnext).second) <= k) return true;}
                else break;
            }
        }            
        return false;
    }
};