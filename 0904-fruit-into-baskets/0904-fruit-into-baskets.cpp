class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int> st;

        int n = fruits.size();

        int prev = 0;
        int ans = 0;

        for(int i = 0; i < n; i++) {

            st[fruits[i]]++;

            while(st.size() > 2) {

                st[fruits[prev]]--;

                if(st[fruits[prev]] == 0) {
                    st.erase(fruits[prev]);
                }

                prev++;
            }

            ans = max(ans, i - prev + 1);
        }

        return ans;
    }
};