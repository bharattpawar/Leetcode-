class Solution {
public:
    int maxScore(vector<int>&  arr, int k) {
        int start=0;
    int n=arr.size();
    int sum=0;
 if(k>=n){
    for(int i=0;i<n;i++){
 sum+=arr[i];
 }return sum;
    }int m=k;
    int ans=0;
for(int i=0;i<m;i++){
    sum+=arr[i];
}
ans=sum;
int kth=k-1;
int end=n-1;
while(kth>=0){
    sum-=arr[kth];
 sum+=arr[end];
    kth--;
    end--;
    ans=max(ans,sum);
}


return ans;
    }
};