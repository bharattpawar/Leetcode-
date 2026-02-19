class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int plus=0;
        int n=nums.size();
        int minus=0;
        vector<int>ans;
        while(minus<n&&plus<n){
while(nums[plus]<0){
    plus++;
}
ans.push_back(nums[plus]);
plus++;
while(nums[minus]>0){
    minus++;
}
ans.push_back(nums[minus]);
minus++;


        }
        return ans;
    }
};
