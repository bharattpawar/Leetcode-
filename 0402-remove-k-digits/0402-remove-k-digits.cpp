class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();stack<int>st;
if(n==k)return "0";
        for(int i=0;i<n;i++){
            int number=num[i]-'0';
             while(k>0&&!st.empty()&&st.top()>number){
                st.pop();
                k--;
             }
             st.push(number);
        }
        int j=n-1; 
        while(k>0&&j>=0&&!st.empty()){
            st.pop();
            k--;
            j--;
        }
        string ans;stack<int>rev;
         while(!st.empty()){
        rev.push(st.top());
    st.pop();
    }
        
      while(!rev.empty()&&rev.top()==0){
    rev.pop();
    }
 while(!rev.empty()){
        ans.push_back(rev.top()+'0');
    rev.pop();
    
    }
if(ans.size()==0){
    return "0";
}


     
    return ans;
    }
};