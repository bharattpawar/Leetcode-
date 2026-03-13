class Solution {
public:
    int beautySum(string s) {
         int n=s.size(); 
        int i=0; int ans=0;
        while(i<n){
                    vector<int>check(26,0);
 
            int j=i; 
while(j<n){
    check[s[j]-'a']++;
       int max=INT_MIN;
                int min=INT_MAX;

                for(int k=0;k<26;k++){
                    if(check[k]>0){
                        if(check[k]>max) max=check[k];
                        if(check[k]<min) min=check[k];
                    }
                }
                    j++;
 
    ans+=max-min;
}
 i++;
        }return ans;
    }
};