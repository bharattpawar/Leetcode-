class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      map<char,int>check;
        int ans=0; 
        int n=s.size();
        int next=0;
        int prev=0;int maxans=0;
        while(next<n){
           while(prev<next&&check.find(s[next])!=check.end()){
check.erase(s[prev]);
ans--;prev++;
           } 

            check[s[next]]=1;
            ans++;
maxans=max(maxans,ans);
next++;
        }return maxans;
    }
};