class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int start=1;
       int n=piles.size();int end=0;int ans=INT_MAX;
       for(int i=0;i<n;i++){
end=max(end,piles[i]);
       } 
       while(start<=end){
        int mid=start+(end-start)/2;
        long long count=0;
for(int i=0;i<n;i++){
count+=piles[i]/mid;
if(piles[i]%mid!=0)count++;
}

if(count<=h){
    ans=min(mid,ans);
    end=mid-1;
}
else{
    start=mid+1;
}       }
return ans;
    }
};