class Solution {
public:
    string reverseWords(string s) {
string ans;
int j=0;
while(j<s.size()&&s[j]==' '){
    j++;
}
for(int i=s.size()-1;i>=j;i--){
while(i>=j&&s[i]==' '){
    i--;
}
 
int stop=i;
while(stop>=j&&s[stop]!=' '){
    stop--;
}
int start=stop+1;
while(start<s.size()&&s[start]!=' '){
    ans+=s[start];
    start++;
}
   i=stop; 
     if(i>=j)
     ans+=' ';
}
 
return ans;
    }
};