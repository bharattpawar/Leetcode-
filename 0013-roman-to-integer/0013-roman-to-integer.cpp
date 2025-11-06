class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> check;int ans=0;
check['I'] = 1;
check['V'] = 5;
check['X'] = 10;
check['L'] = 50;
check['C'] = 100;
check['D'] = 500;
check['M'] = 1000;
int n=s.size(); int i=0;
for(i=0;i<n-1;i++){
    if(check[s[i]]>=check[s[i+1]])
ans+=check[s[i]];
else{
ans=ans+check[s[i+1]]-check[s[i]];
i++;}}
if(i<n){
    ans+=check[s[i]];
}
return ans;
    }
};