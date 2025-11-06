class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        char sign = 0;
        int i = 0;

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // Step 2: Handle sign
        while (i < n && (s[i] == '-' || s[i] == '+')) {
            if (!sign) sign = s[i++];
            else return 0;
        }

        // Step 3: Skip leading zeros
        while (i < n && s[i] == '0') i++;

        // Step 4: Must start with a digit
        if (i >= n || s[i] < '0' || s[i] > '9') return 0;

        long long ans = 0;

        // Step 5: Process digits safely
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            // Check overflow before multiplication
            if (ans > (LLONG_MAX - digit) / 10) {
                // Clamp to int range
                return (sign == '-') ? INT_MIN : INT_MAX;
            }

            ans = ans * 10 + digit;
            i++;
        }

        // Step 6: Apply sign
        if (sign == '-') ans = -ans;

        // Step 7: Clamp to int range
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;

        return (int)ans;
    }
};
