class Solution {
public:

    void check(string &s, int i, long long &num) {
        
        if (i >= s.size() || s[i] < '0' || s[i] > '9') {
            return;
        }

        int digit = s[i] - '0';
 if (num > INT_MAX)
            return  ;

        if (num < INT_MIN)
            return  ;
        num = num * 10 + digit;

        check(s, i + 1, num);
    }

    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

  
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i >= s.size()) return 0;

       
        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

   
        check(s, i, num);

        num *= sign;

      
        if (num > INT_MAX)
            return INT_MAX;

        if (num < INT_MIN)
            return INT_MIN;

        return (int)num;
    }
};