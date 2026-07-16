class Solution {
public:

int ans(vector<int>&nums,int n,vector<int>& check){
    if(n==0){
        return nums[0];
    }
    if(n==1){
        return max(nums[0],nums[1]);
    }
    if(check[n]!=-1)return check[n];
    return check[n]=max((nums[n]+ans(nums,n-2,check)),ans(nums,n-1,check));
}
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>check(n+1,-1);
        return ans(nums,n,check);
    }
};