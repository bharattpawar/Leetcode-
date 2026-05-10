class Solution {
public:
int iseven(int n){
    if(n%2==0)return 1;return 0;
}
    int minKBitFlips(vector<int>& nums, int k) {
     deque<int>dq;int ans=0;
     int n=nums.size();
     for(int i=0;i<n;i++){ 
       
    if(dq.empty()&&nums[i]==0){
          if(k+i>n&&nums[i]==0){
return -1;
        }
        nums[i]=1;
        ans++;
        dq.push_back(i+k-1);

    }
     else if(!dq.empty()){
     while(!dq.empty()&&i>dq.front()){
        dq.pop_front();
    }
    if(dq.empty()&&nums[i]==0){
          if(k+i>n&&nums[i]==0){
return -1;
        }
        nums[i]=1;
        ans++;
        dq.push_back(i+k-1);

    }
    else if(!dq.empty()){
        
        if(iseven(dq.size())){
              if(k+i>n&&nums[i]==0){
return -1;
        }
 if(nums[i]==0){
              ans++;
              nums[i]=1; dq.push_back(i+k-1);      }  }
     else{

  if(k+i>n&&nums[i]==1){
return -1;
        }

            if(nums[i]==0){
                nums[i]=1; }
            else{
                ans++;
                nums[i]=1;
                dq.push_back(i+k-1);         }    }    }  }
   }
    
   return ans;
    }
};