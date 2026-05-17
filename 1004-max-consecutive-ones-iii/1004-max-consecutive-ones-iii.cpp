class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int next=0;
        int ans=0;
        int prev=0;
        int n=nums.size();
        int cont=0;
        if(k==0){
            for(int i=0;i<n;i++){
if(nums[i]==0){
    cont=0;
}
else{
    cont++;
}
ans=max(ans,cont);
            }
            return ans;
        }
        while(next<n){
if(nums[next]==0)k--;
            while(k<=0){
                while(next+1<n&&nums[next+1]==1){
                    next++;
                }
ans=max(ans,next-prev+1);
if(nums[prev]==0){
    k++;
}
prev++;
            }
            next++;
        }
        if(k>0){
            ans=max(ans,next-prev);
        }
        return ans;
    }
};