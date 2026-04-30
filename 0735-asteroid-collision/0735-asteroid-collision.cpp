class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        vector<int> ans;
        int i = 0;

        while(i < arr.size()){
            if(st.empty()){
                st.push(arr[i]);
                i++;
            }
            else {
                bool destroyed = false;

                while(!st.empty() && st.top() > 0 && arr[i] < 0){
                    if(abs(st.top()) < abs(arr[i])){
                        st.pop();
                    }
                    else if(abs(st.top()) == abs(arr[i])){
                        st.pop();
                        destroyed = true;
                        break;
                    }
                    else {
                        destroyed = true;
                        break;
                    }
                }

                if(!destroyed){
                    st.push(arr[i]);
                }
                i++;
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};