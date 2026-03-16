class Solution {
public:
void cal(vector<string>&ans,string check,int right,int left,int n){
    if(right+left==n+n){
        ans.push_back(check);
        return;
    }
    if(right<n){
 cal(ans,check+'(',right+1,left,n);

    }
    if(left<right){
 cal(ans,check+')',right,left+1,n);

    }
  
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string check="";

        check+='(';
        cal(ans,check,1,0,n);
        return ans;
    }
};