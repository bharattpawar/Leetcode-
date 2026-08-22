class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long way=0;
        for(int i=0;i*cost1<=total;i++){
            long long money=total-i*cost1;
              way+=money/cost2;
            way++;
        }return way;
    }
};