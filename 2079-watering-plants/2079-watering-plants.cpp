class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        if(plants[0]>capacity){
            return -1;
        }
        int i=0;
        int n=plants.size();
        int step=0;
        int c=capacity;
        while(i<n){
            if(plants[i]<=c){
                c-=plants[i];
                step++;
                i++;
            }else{
                c=capacity;
                step=2*i+step;
                continue;
            }
        }
        return step;
    }
};