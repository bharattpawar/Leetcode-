class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int sum = 0;

        // first k cards from left
        for(int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        int rightIndex = n - 1;

        // shift one-by-one from left to right
        for(int i = k - 1; i >= 0; i--) {

            sum -= cardPoints[i];          // remove left
            sum += cardPoints[rightIndex]; // add right

            rightIndex--;

            ans = max(ans, sum);
        }

        return ans;
    }
};