class Solution {
public:
    string reverseWords(string s) {
string ans;
 string word;
   int n=s.size();int i=n-1;int start=0;
   while(s[start]==' ')start++;
   while(s[i]==' '){
    i--;
   }
    while(i>=start){

   if(s[i]==' '){
    reverse(word.begin(), word.end());
ans+=word;
ans+=' ';
while(i>=start&&s[i]==' ')i--;
word.clear();
   } 
   word+=s[i];
   i--;
    }reverse(word.begin(), word.end());
    ans+=word;
return ans;
    }
};