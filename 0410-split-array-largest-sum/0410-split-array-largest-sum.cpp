class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            start=max(nums[i],start);
            end+=nums[i];
        }int ans=0;
       
        while(start<=end){
            int mid=start+(end-start)/2;
            int sum=0; int sub=0;
            for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum>mid){
                    sum=nums[i];
sub++;
                }
            }
            if(sum<=mid){
sub++;
            }

            if(sub<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};