class Solution {
public:
    int xorOperation(int n, int start) {
        int i=0;int ans=0;
        while(n--){
            int curr=start+2*i;
            i++;
ans^=curr;
        }return ans;
    }
};