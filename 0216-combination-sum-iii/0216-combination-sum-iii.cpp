class Solution {
public:
void find(vector<vector<int>>&ans,vector<int>&check,int k,int n,int i,int sum){
        if(sum==n){
        if(check.size()==k)
        ans.push_back(check);return;
    }
    if(i>9||sum>n||check.size()>k){
        return;
    }
 
     
    check.push_back(i);
    find(ans,check,k,n,i+1,sum+i);
 check.pop_back();
        find(ans,check,k,n,i+1,sum);


}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>check;int i=1;
        find(ans,check,k,n,i,0);
        return ans;
    }
};