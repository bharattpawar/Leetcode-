class Solution {
public:
    int hammingWeight(int n) {int set=0;
    while(n){
        if(n%2==1){
set++;
        }
        n=n/2;

    }return set;
    }
};