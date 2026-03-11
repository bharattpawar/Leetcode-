class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();long long ans=0;
        int i=0;int isneg=0;
        while(i<n&&s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            isneg=1;
            i++;
        }
          else if(s[i]=='+'){
             
            i++;
        }
        while(i<n){
            if(s[i]>='0'&&s[i]<='9'){
                ans=ans*10+(s[i]-'0');
                if(isneg==1){
                  if(ans>INT_MAX){
                    return INT_MIN;
                  }  
                }
                else if(ans>INT_MAX){
                    return INT_MAX;
                }
                i++;
            }
            else break;
        }
if(isneg==1)return ans*-1;
return ans;
    }
};