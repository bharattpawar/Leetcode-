class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int check=1;int i=0; int n=arr.size();
    while(k){
         
        if(i<n&&arr[i]==check){
             i++;
            check++;
            
        }
        else{
            check++;
            k--; 
        } if(k==0)return check-1;
    }
    return check-1;
    }
};