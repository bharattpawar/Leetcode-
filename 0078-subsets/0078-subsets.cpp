class Solution {
public:


void find(vector<vector<int>>&ans,vector<int>check,int i,vector<int> nums){
if(i == nums.size()) {
    ans.push_back(check);
    return;
}
    check.push_back(nums[i]);
     find(ans,check,i+1,nums);
     check.pop_back();
          find(ans,check,i+1,nums);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>check;
        
        find(ans,check,0,nums);
return ans;
    }
};