class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;map<char,int> m;
        for(auto i:s){m[i]++;}
        for(auto i:s){pq.push({m[i],i});}
        string ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);pq.pop();
            }return ans;
    }
};