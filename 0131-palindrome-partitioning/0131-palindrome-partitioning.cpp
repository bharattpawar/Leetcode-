class Solution {
public:


void find(string &s,vector<vector<string>>&ans,vector<string> &check,int i){
    if(i==s.size()){
        ans.push_back(check);
        return;
    }
    for(int index=i;index<s.size();++index){
        if(ispaland(s,i,index)){
            check.push_back(s.substr(i,index-i+1));
            find(s,ans,check,index+1);
            check.pop_back();
        }
    }
}
bool ispaland(string &s,int i,int index){
    while(i<=index){
        if(s[i]!=s[index]){
            return false;
        }
        i++;
        index--;
    }return true;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>check;
        find(s,ans,check,0);return ans;
    }
};