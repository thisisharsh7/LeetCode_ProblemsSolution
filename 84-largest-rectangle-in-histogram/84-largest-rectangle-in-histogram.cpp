class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> rb(heights.size());
    // int[] rb=new int[heights.length];
        stack<int> st;
    // Stack<Integer> st=new Stack<>();
        st.push(heights.size()-1);
        rb[heights.size()-1]=heights.size();
        for(int i=heights.size()-2;i>=0;i--){
            while(st.size()>0 && heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(st.size()==0){
                rb[i]=heights.size();
            }else{
                rb[i]=st.top();
            }
            st.push(i);
        }
        vector<int> lb(heights.size());
        // int[] lb=new int[heights.length];
        while(!st.empty()){
            st.pop();
        }
        st.push(0);
        lb[0]=-1;
        for(int i=1;i<heights.size();i++){
            while(st.size()>0 && heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(st.size()==0){
                lb[i]=-1;
            }else{
                lb[i]=st.top();
            }
            st.push(i);
        }
        
        int maxArea=0;
        for(int i=0;i<heights.size();i++){
            int width=rb[i]-lb[i]-1;
            int area=heights[i]*width;
            if(area>maxArea){
                maxArea=area;
            }
        }
        return maxArea;
    }
};