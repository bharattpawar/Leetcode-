class Solution {
public:
int isbeautifull(int i,int j,string &s){
    vector<int>check(26,0);
    for(int start=i;start<=j;start++){
        check[s[start]-'a']++;
    }
    int large_count=0;
    int small_count=INT_MAX;
    for(int start=0;start<=25;start++){
        if(check[start]>large_count)large_count=check[start];
        if(check[start]<small_count&&check[start]>0)small_count=check[start];
    }
if(large_count!=0&&small_count!=INT_MAX){
    if(large_count-small_count>0)return large_count-small_count;
}
return 0;
}
    int beautySum(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0; i<n ;i++){
            for(int j=i ;j<n;j++){
                ans+=isbeautifull(i,j,s);
            }
        }
        return ans;
    }
};