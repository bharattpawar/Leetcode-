class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans="";

        for(int i=0;i<n;i++){

            // odd length palindrome
            int start=i;
            int end=i;

            while(start>=0 && end<n && s[start]==s[end]){
                if(end-start+1 > ans.size()){
                    ans = s.substr(start,end-start+1);
                }
                start--;
                end++;
            }

            // even length palindrome
            start=i;
            end=i+1;

            while(start>=0 && end<n && s[start]==s[end]){
                if(end-start+1 > ans.size()){
                    ans = s.substr(start,end-start+1);
                }
                start--;
                end++;
            }
        }

        return ans;
    }
};