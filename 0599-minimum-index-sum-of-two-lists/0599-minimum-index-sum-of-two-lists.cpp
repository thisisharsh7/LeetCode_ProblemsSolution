class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1 = list1.size();
        vector<string> ans;
        vector<int> num;
        int n2 = list2.size();
        int k = 0;
        int min = INT_MAX;
        for(int i = 0 ;i < n1;i++ ){
            string s = list1[i];
            for(int j = 0;j < n2;j++){
                if(list2[j]==s){
                    
                    k = i+j;
                    
                    if(k <=min){
                         if(!ans.empty() && k!=min){
                   
                ans.pop_back();
                    
                }
                        ans.push_back(s); 
                min = k;
                        cout<<k<<endl;
            }else{
                if(!ans.empty()){
                   ans.push_back(s); 
                ans.pop_back();
                    
                }
            }
                    break;
                }
            }
            
        }
        return ans;
    }
};