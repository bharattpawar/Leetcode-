class Solution {
public:
    int t[1001][1001];

    int ispalandrome(int start, int end, string &s) {
        if (start >= end) return 1;  // Single char or empty is palindrome
        if (t[start][end] != -1) return t[start][end];

        if (s[start] == s[end]) {
            return t[start][end] = ispalandrome(start + 1, end - 1, s);
        }
        return t[start][end] = 0;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        memset(t, -1, sizeof(t));

        int max_len = 1;
        int start_idx = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (ispalandrome(i, j, s) == 1) {
                    if (j - i + 1 > max_len) {
                        max_len = j - i + 1;
                        start_idx = i;
                    }
                }
            }
        }

        return s.substr(start_idx, max_len);
    }
};
