class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int check=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans=max(ans,check);
                check=0;
                 while(nums[i]==0)i++;
            }
            else{
                check++;
            }
 ans=max(ans,check);
        }return ans;
    }
};