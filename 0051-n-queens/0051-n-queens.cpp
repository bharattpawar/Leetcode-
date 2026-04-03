class Solution {
public:
bool dig(vector<string>&board,int i,int j,int n){
    int row=i;
    int col=j;
    while(row>-1&&col>-1){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }
    row=i;
    col=j;
    while(row>-1&&col<n){
        if(board[row][col]=='Q'){
            return false;
        } 
        row--;
        col++;
    }
    return true;
}
void find(vector<vector<string>>& ans,vector<string>&board,vector<int>&column,int i,int n){
if(i==n){
    ans.push_back(board);return;
}
for(int j=0;j<n;j++){
if(column[j]==0&&dig(board,i,j,n)){
column[j]=1;
board[i][j]='Q';
find(ans,board,column,i+1,n);
column[j]=0;
board[i][j]='.';
}
}
}
    vector<vector<string>> solveNQueens(int n) {
vector<vector<string>>ans;
vector<string>board(n);
vector<int>column(n,0);
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
             board[i].push_back('.');
        }
      }
      find(ans,board,column,0,n);
      return ans;
    }
};