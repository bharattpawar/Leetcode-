class Solution {
public:
    int numberOfSubstrings(string s) {
     int ans=0;
     int start=0;
     int end=0;int n=s.size();
     unordered_map<char,int>mp;
     while(end<n){
        mp[s[end]]++;
        while(mp.size()==3){
            ans+=n-end;
            mp[s[start]]--;
if(mp[s[start]] == 0)
    mp.erase(s[start]);
    start++;        }end++;




     }  
     while(mp.size()==3&&start<n){
         ans++;
            mp[s[start]]--;
if(mp[s[start]] == 0)
    mp.erase(s[start]);
    start++;
     }
     
      return ans;
    }
};