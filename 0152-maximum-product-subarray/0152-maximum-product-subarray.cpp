class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int suf=1;int ans=INT_MIN;
        int pref=1;
        for(int i=0;i<n;i++){
            
            suf=arr[i]*suf;
            pref=arr[n-i-1]*pref;
            if(suf==0)suf=arr[i];
            if(pref==0)pref=arr[n-i-1];
ans = max(ans, max(suf, pref));
ans = max(ans, arr[i]);
        }
    
return ans;

    }
};