class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int element1=0;
        int element2=0;
        for(int i=0;i<nums.size();i++){
            if(element2!=nums[i]&&count1==0||element1==nums[i]){ 
                    element1=nums[i];
                    count1++;
              }
                else if(count2==0||element2==nums[i]){ 
                    element2=nums[i];
                    count2++;
              }
              else{
                count1--;
count2--;
              }
        }
        int check=nums.size()/3;
        int check1=0;
        int check2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element1){
                check1++;
            }
            else if(nums[i]==element2){
                check2++;
            }
        }vector<int>ans;
        if(check2>check){
            ans.push_back(element2);
        }
        if(check1>check){
            ans.push_back(element1);
        }return ans;
    }
};