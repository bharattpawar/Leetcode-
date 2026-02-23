class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int sign=1;
        int i=0;long long ans=0;
        while(s[i]==' '){
            i++;
        }
        
         if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            sign=1;
            i++;
        }
        while(s[i]-'0'==0)i++;
        if(i<n&&s[i]-'0'>=0&&s[i]-'0'<=9){ 
        while(i<n&&s[i]-'0'>=0&&s[i]-'0'<=9){
 
ans=ans*10+s[i]-'0';
i++;
                 if(sign==-1){
            if(-1*ans<=INT_MIN)return INT_MIN;
            }
else  if(ans>=INT_MAX)return INT_MAX;   }}
        else{
            return 0;
        }
if(sign==-1){
    ans=ans*-1;
}
 
return ans;
    }
};