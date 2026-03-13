class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int i=0;
        string ans;
        string anscheck;

        while(i<n){
int right_check=i;
while(right_check<n-1&&s[right_check]==s[right_check+1]){
anscheck+=s[right_check];
 
right_check++;
}
 if(right_check<n&&anscheck.size()>0&&anscheck.back()==s[right_check]){
   anscheck+=s[right_check];
 
}
if(ans.size()<anscheck.size()){
    ans=anscheck;}

anscheck="";
while()
int left=i-1;
int right=i+1;
if(left>=0&&right<n&&s[left]==s[right])
{while(left>=0&&right<n&&s[left]==s[right]){
    left--;
    right++;
}
left++;
right--;}
else{
    right=0;
    left=0;
}
 
if(left>=0&&right<n&&ans.size()<right-left+1){
    ans="";
    for(int j=left;j<=right;j++){
    ans+=s[j];
    }
}

 

i++;
        }
        return ans;
    }
};