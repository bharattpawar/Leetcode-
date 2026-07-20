class Solution {
public:
 bool canjump(vector<int>& stones,int n,unordered_map<int,int>&mp,int cji,int pj,vector<vector<int>>&dp){
    if(cji==n-1)
        return true;
    
    if(dp[cji][pj]!=-1)return dp[cji][pj];
    bool result=false;
    for(int i=pj-1;i<=pj+1;i++){
if(i!=0){
    int nextstone=stones[cji]+i;
    if(mp.find(nextstone)!=mp.end()){
        result =result||canjump(stones,n,mp,mp[nextstone],i,dp);
    }
}
    }return dp[cji][pj]=result;
}
    bool canCross(vector<int>& stones) {
        
        int n=stones.size();unordered_map<int,int>mp;
if(n==0)return true;
if(stones[1]!=1)return false;
    for(int i=0;i<n;i++){
        mp.insert({stones[i],i});
    }
vector<vector<int>> dp(n, vector<int>(n + 1, -1));        return canjump(stones,n,mp,1,1,dp);
    }
};