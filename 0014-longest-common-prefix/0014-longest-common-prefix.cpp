class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
        int i=1;
        int ans=INT_MAX;
        if(strs.size()==1){
            return strs[0];
        }
        while(i<strs.size()){
            int check=0;
                    int count=0;

            int n=strs[0].size();
            int n2=strs[i].size();
            int check2=0;
while(check<n&&check2<n2){
    if(strs[0][check]==strs[i][check2]){
        count++;
        check++;
        check2++;
    }
    else break;

}
i++;
ans=min(ans,count);
        }

        string ans1;
        int j=0;
        int size=strs[0].size();
        while(ans--){
ans1+=strs[0][j];
j++;

        }
        return ans1;
    }
};