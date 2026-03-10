class Solution {
public:
    string largestOddNumber(string num) {
        int odd=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){
                odd=i;
                break;
            }
        }
        if(odd==-1)return "";
        num.resize(odd+1);
        return num;
    }
};