class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char>m1;
                unordered_map<char,char>m2;
 
       int i=0;
  
       int n =s.size();
        
       while(i<n){
if(m1.find(s[i])==m1.end()){
m1[s[i]]=t[i];
}else{
    if(m1[s[i]]!=t[i]){
        return false;
    }
}
if(m2.find(t[i])==m2.end()){
m2[t[i]]=s[i];
}else{
    if(m2[t[i]]!=s[i]){
        return false;
    }
}

i++;
       }return true;
    }
};