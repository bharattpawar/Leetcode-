class Solution {
public:
    string reverseWords(string s) {

        int n = s.size();
        int i = 0, j = 0;

        // remove extra spaces
        while(i < n){
            while(i < n && s[i] == ' ') i++;   // skip spaces

            while(i < n && s[i] != ' '){
                s[j++] = s[i++];               // copy word
            }

            while(i < n && s[i] == ' ') i++;   // skip spaces

            if(i < n) s[j++] = ' ';            // add single space
        }

        s.resize(j);

        // reverse whole string
        reverse(s.begin(), s.end());

        // reverse each word
        int start = 0;
        for(int end = 0; end <= s.size(); end++){
            if(end == s.size() || s[end] == ' '){
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        return s;
    }
};