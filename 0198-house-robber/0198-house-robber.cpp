class Solution {
public:

int ans(vector<int>&nums,int n,vector<int>& check){
    
    if(check[n]!=-1)return check[n];
    return check[n]=max((nums[n]+ans(nums,n-2,check)),ans(nums,n-1,check));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>check(3,0);
        if(n==1)return nums[0];
        check[0]=nums[0];
        check[1]=max(nums[0],nums[1]);
        if(n==2)return max(nums[0],nums[1]);
  for(int i=2;i<n;i++){
    check[2]=max(nums[i]+check[0],check[1]);
    check[0]=check[1];
    check[1]=check[2];
  }
        return check[2];
    }
};