class Solution {
public:
void find(vector<vector<int>>&ans, vector<int>&check,int k,int n,int sum,int i){
if(i>10||check.size()>k||sum>n){
    return;
}
if(sum==n&&check.size()==k){
    ans.push_back(check);
    return;
}

check.push_back(i);
find(ans,check,k,n,sum+i,i+1);
check.pop_back();
find(ans,check,k,n,sum,i+1);



}
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>>ans;
      vector<int>check;
      find(ans,check,k,n,0,1);
      return ans;

    }
};