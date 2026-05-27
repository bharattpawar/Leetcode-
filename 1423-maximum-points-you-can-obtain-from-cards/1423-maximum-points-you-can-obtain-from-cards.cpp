class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();

        int ans = 0;
        int suml = 0;
        int sumr = 0;

        vector<int> ltor(n);
        vector<int> rtol(n);

        if(k >= n){
            for(int i = 0; i < n; i++){
                ans += cardPoints[i];
            }
            return ans;
        }

        // prefix from left and right
        for(int i = 0; i < n; i++){

            suml += cardPoints[i];
            ltor[i] = suml;

            sumr += cardPoints[n - i - 1];
            rtol[n - i - 1] = sumr;
        }

        // all from left
        ans = ltor[k - 1];

        // mix left + right
        for(int i = 0; i < k - 1; i++){

            int leftsum = ltor[i];

            int rightsum = rtol[n - (k - i - 1)];

            ans = max(ans, leftsum + rightsum);
        }

        // all from right
        ans = max(ans, rtol[n - k]);

        return ans;
    }
};