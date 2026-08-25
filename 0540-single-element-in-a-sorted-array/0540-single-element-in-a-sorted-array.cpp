class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int start=0;int n=nums.size();
       if(n==1)return nums[0];
       int end=nums.size()-1; 
       if(nums[0]!=nums[1])return nums[0];
       if(nums[n-1]!=nums[n-2])return nums[n-1];
       start=1;
       end=n-2;
       while(start<=end){
        int mid=start+(end-start)/2;
 if(mid%2==0){
    if(nums[mid-1]==nums[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
 }
 else{
   if(nums[mid]==nums[mid+1]){
        end=mid-1;
    } else{
        start=mid+1;
    }
 }
       } return nums[end];
    }
};