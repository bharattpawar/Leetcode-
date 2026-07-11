class Solution {
public:
int climb(int n,vector<int>&ans){
    if(n==1||n==0||n==2)return n;
    if(ans[n]!=-1){
        return ans[n];
    }
    return ans[n]=climb(n-1,ans)+climb(n-2,ans);
}
    int climbStairs(int n) {
vector<int>ans(n+1,-1);
if(n<3)return n;
ans[0]=0;
ans[1]=1;
ans[2]=2; 
for(int i=3;i<=n;i++){
ans[i]=ans[i-1]+ans[i-2];
}return ans[n];
       
    }
};