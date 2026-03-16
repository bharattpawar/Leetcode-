class Solution {
public:
void find(int n,int i,vector<string>&ans,string check){
if(i==n){
    ans.push_back(check);
    return;
}
if(check.empty()||check.back()=='1'){
         
   find(n,i+1,ans,check+'0');
   find(n,i+1,ans,check+'1');

 }
else{
        find(n,i+1,ans,check+'1');

 }
 




}
    vector<string> validStrings(int n) {
        vector<string>ans;
        string check="";
        find(n,0,ans,check);
        return ans;
    }
};