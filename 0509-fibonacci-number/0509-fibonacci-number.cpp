class Solution {
public:


int find(int frist,int second,int n){
if(n==0||n==1){
    return second;
}
n--;
return find(second,second+frist,n);
}
    int fib(int n) {
        if(n==0||n==1)return n;
     return   find(0,1,n);
    }
};