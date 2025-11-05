class Solution {
public:
int t[1001][1001];
int ispalandrome(int start,int end,string &s){
 if(start>=end)return 1;
    if(t[start][end]!=-1){
        return t[start][end];
  }
  if(s[start]==s[end]){return t[start][end]=ispalandrome(start+1,end-1,s);}
   
  return t[start][end]=0;
}
    string longestPalindrome(string s) {
      int n=s.size(); int max_ans=0;
      memset(t,-1,sizeof(t));
      int ans_start=0; 
      for(int i=0;i<n;i++){
      for(int j=i; j<n;j++){
       if(ispalandrome(i,j,s)==1){
        if(j-i+1>max_ans){
            max_ans=j-i+1;
            ans_start=i;
        }
       }
      }}
 
 return s.substr(ans_start,max_ans);
      }
};