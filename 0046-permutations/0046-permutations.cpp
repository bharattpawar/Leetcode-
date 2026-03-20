class Solution {
public:
void find( vector<vector<int>>&ans, vector<int>check,vector<int>nums,int i,vector<int>mark){
if(check.size()==nums.size()){
    ans.push_back(check);return;
}
for(int j=0;j<nums.size();j++){
    if(mark[j]!=1){
    check.push_back(nums[j]);
    mark[j]=1;
       find(ans,check,nums,i+1,mark);
       check.pop_back();
       mark[j]=0;
    }

}
 
 
}
 
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>check;
vector<int> mark(nums.size(), 0);        find(ans,check,nums,0,mark);
return ans;
    }
};