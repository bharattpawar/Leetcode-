class Solution {
public:
void leftans(vector<int>&arr,vector<int>&left,int n){
    stack<int>st;
    for(int i=0;i<n;i++){
       if(st.empty()){
            left[i]=-1;
        }
         else{  while(!st.empty()&&arr[st.top()]>arr[i]){
            st.pop();
        } 
        if(!st.empty())left[i]=st.top();
        else left[i]=-1;
        }
       
            
        st.push(i);
    }return;
}
void rightans(vector<int>&arr,vector<int>&right,int n){
    stack<int>st;
    for(int i=n-1;i>=0;i--){
       if(st.empty()){
            right[i]=n;
        }
         else{  while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        } 
        if(!st.empty())right[i]=st.top();
        else right[i]=n;
        }
       
            
        st.push(i);
    }return;
}
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        leftans(arr,left,n);
        rightans(arr,right,n);
        long long sum=0;
        int M=1e9+7;
        for(int i=0;i<n;i++){
            long long la=i-left[i];
            long long ra=right[i]-i;
            long long total=la*ra;
            long long totalsum=arr[i]*total;
            sum=(sum+totalsum)%M;
        }
        return sum;
    }
};