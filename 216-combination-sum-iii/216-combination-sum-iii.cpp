class Solution {
public:
    void findCombinations(int idx,int target,int k,vector<int> &sans,vector<vector<int>> &ans){//passing by refrence so that 2D vector can have it's value stored at every function call
        if(target==0 and sans.size()==k){
            ans.push_back(sans);//pushing the 1D vector with the sum equal to target
        }
        for(int i=idx;i<10;i++){
            if(i>target ){//at every i greater than target we breaks the loop
                break;
            }

            sans.push_back(i);//pushing i which are less than target
            findCombinations(i+1,target-i,k,sans,ans);//recursive call with index=i+1 i.e 1 increased at every call so that no two same elements are together
            sans.pop_back();//on going back we pop all the elements of 1D vector
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> rev;//return type
        vector<int> sans;//assumption of single vector
        findCombinations(1,n,k,sans,rev);//this function is used to give the desired output in our 2D vector by recursion
        return rev;
    }
};