class Solution {
public:
int maximumDifference(vector<int>& nums) {
int n=nums.size();
vector<int>check(n,0);    
int maxi=-1;        
for(int i=n-1;i>=0;i--){
if(nums[i]>maxi){
maxi=nums[i];
}check[i]=maxi;}
int ans=-1;
for(int i=0;i<n;i++){
if(check[i]-nums[i]>ans){
    if(check[i]!=nums[i])
ans=check[i]-nums[i];
}}
return ans;
}
};