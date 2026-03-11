class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int i=0;int ans=0;
      
           unordered_map<char, int> check; 
check['I'] = 1;
check['V'] = 5;
check['X'] = 10;
check['L'] = 50;
check['C'] = 100;
check['D'] = 500;
check['M'] = 1000;
if(n==1){
    return check[s[0]];
}
        while(i<n-1){
            if(check[s[i]]>=check[s[i+1]]){
ans+=check[s[i]];
            }
            else{
                ans+= check[s[i+1]]-check[s[i]];
                i++;
            }
            i++;
        }if(check[s[i]]<=check[s[i-1]]){
            ans+=check[s[i]];
        }
        return ans;
    }
};