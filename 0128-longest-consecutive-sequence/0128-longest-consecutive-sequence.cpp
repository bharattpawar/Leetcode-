class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
       int n=arr.size();int count=0;
       int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
 if(arr[i]+1==arr[i+1]){count++;}
 else if(arr[i]+1!=arr[i+1]&&arr[i]!=arr[i+1]){
    ans=max(ans,count);
    count=0;
 }
        } 
        ans=max(ans,count);
        return ans+1;
    }
};
