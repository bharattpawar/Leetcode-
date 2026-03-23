class Solution {
public:
   void find(vector<string>&ans,string check,string digits,string letter[],int i){
if(i>=digits.length()){
    ans.push_back(check);
    return;
}
int number=digits[i]-'0';
string fin=letter[number];
for(int index=0;index<letter[number].size();index++){
check.push_back(fin[index]);
find(ans,check,digits,letter,i+1);
check.pop_back();
}


   }
    vector<string> letterCombinations(string digits) {
        string letter[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.size()==0){
            return ans;
        }string check;
        find(ans,check,digits,letter,0);
        return ans;
    }
};