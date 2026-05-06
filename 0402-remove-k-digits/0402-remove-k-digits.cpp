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
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

    
        int i = 0;
        while(i < ans.size() && ans[i] == '0') i++;

        ans = ans.substr(i);

        return ans == "" ? "0" : ans;
     
    return ans;
    }
};