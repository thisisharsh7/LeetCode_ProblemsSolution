#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size()-1;
        if(n==0){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> rev;
        rev.push_back(intervals[0]);
        int c=0;
        for(int i=1;i<=n;i++){
            if(intervals[i][0]<=rev[c][1]){
                rev[c][1]=max(rev[c][1],intervals[i][1]);
            }else{
                rev.push_back(intervals[i]);
                c++;
            }
        }
        return rev;
    }
};
 