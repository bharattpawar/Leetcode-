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
vector<int>ans(3,-1);
if(n<3)return n;
ans[0]=0;
ans[1]=1;
ans[2]=2;
long long result=0;int i=3;
while(i<=n){
result=ans[2]+ans[1];
ans[1]=ans[2];
ans[2]=result;i++;
}
return result;
       
    }
};