class Solution {
public:
void leftans(vector<int>&heights,vector<int>&left,int n){
    stack<int>st;
         for(int i=0;i<n;i++){
                 while(!st.empty()&&heights[st.top()]>heights[i]){
                   left[st.top()]=i;
                   st.pop();   
           }
          st.push(i);
        }
        return;
}
void rightans(vector<int>&heights,vector<int>&right,int n){
    stack<int>st;
         for(int i=n-1;i>=0;i--){
                 while(!st.empty()&&heights[st.top()]>heights[i]){
                   right[st.top()]=i;
                   st.pop();   
           }
          st.push(i);
        }
        return;
}
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
     vector<int>left(n,n);
     vector<int>right(n,-1);
 leftans(heights,left,n);
  rightans(heights,right,n);
  int ans=0;
  for(int i=0;i<n;i++){
    if(((left[i]-right[i]-1)*heights[i])>ans){
        ans=(left[i]-right[i]-1)*heights[i];
    }
  }return ans;
    }
};