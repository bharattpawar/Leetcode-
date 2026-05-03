class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int m=1e9+7;
     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
     for(int i=0;i<n;i++){
        pq.push({nums[i], i});
     }
     int ans=0;
     for(int i=1;i<=right;i++){
      auto p = pq.top();
pq.pop();
int number = p.first;    
        int ind=p.second;
          if(i >= left){
                ans =(ans+number)%m;
            }
     if (ind + 1 < n) {
    pq.push({number + nums[ind + 1], ind + 1});
}
      
     }
     return ans;
    }
};