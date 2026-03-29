class Solution {
public:int n;int m;
vector<vector<int>>direction{{1,0},{0,1},{0,-1},{-1,0}};
bool isans(vector<vector<char>>& board,int i,int j,string& word,int index){
if(index==word.size()) return true;
if(i<0||j<0||i>=n||j>=m)return false;
if(board[i][j]=='$')return false;
if(board[i][j]!=word[index])return false;
char temp=board[i][j];
board[i][j]='$';
for(auto &dir:direction){
    int newi=i+dir[0];
    int newj=j+dir[1];
    if(isans(board,newi,newj,word,index+1))
    return true;
}
board[i][j]=temp;
return false;
}
 
    bool exist(vector<vector<char>>& board, string word) {
         n=board.size();
        m=board[0].size();
          for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]==word[0]){
if(isans(board,i,j,word,0)){
return true;
}  }
    
    }}
    return false;
    }
};