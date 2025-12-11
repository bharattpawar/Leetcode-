class Solution {
public:
    int myAtoi(string s) {
      long long ans=0;
    char sign=' ';
      int i=0;


     
while(s[i]==' ')i++;
      while(s[i]=='-'||s[i]=='+'){
        if(sign==' ')sign=s[i];
        else{return 0;}
        i++;
      }
      while(s[i] >= '0' && s[i] <= '9') {
                    int digit = s[i] - '0';

        if (ans > INT_MAX / 10 || 
   (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
    return sign == 1 ? INT_MAX : INT_MIN;
}

ans = ans * 10 + (s[i] - '0');
i++;
}
  
if(sign=='-')
ans=ans*-1;

return ans;}
};