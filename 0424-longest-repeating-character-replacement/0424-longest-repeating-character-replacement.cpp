class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int ans=0;
 int right=0;
 int maxx=0;
 unordered_map<int,int>mp;
 int left=0;
 while(right<n){
mp[s[right]]++;
maxx=max(maxx,mp[s[right]]);
int window=right-left+1;
int curr=window-maxx;
if(curr>k){
    
    mp[s[left]]--;
    left++;
} ans=max(ans,right-left+1);
right++;
 }return ans;
    }
};