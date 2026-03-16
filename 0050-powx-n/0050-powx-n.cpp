class Solution {
public:
double find(double x,long  n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
       return find(x*x,n/2);
    }
    else{
       return x*find(x,n-1);

    }
}
    double myPow(double x, int n) {
        long  N=n;
      
        if(N<0){
            x=1/x;
            N=-N;
        }
       return find(x,N);
    }
};