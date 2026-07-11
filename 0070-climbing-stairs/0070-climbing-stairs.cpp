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

       return  climb(n,ans);
    }
};