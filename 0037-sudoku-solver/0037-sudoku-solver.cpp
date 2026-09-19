class Solution {
public:
bool canput(vector<vector<char>>& board,int i,int j,int check){
    //row
    for(int row=0;row<9;row++){
        if(board[i][row]==check){
            return 0;
        }
    }
    //col
      for(int col=0;col<9;col++){
        if(board[col][j]==check){
            return 0;
        }}
    //Same box 
int row=(i/3)*3;
int col=(j/3)*3;
for(int a=row;a<row+3;a++){
    for(int b=col;b<col+3;b++){
        if(board[a][b]==check){
            return 0;
        }
    }
}
return 1;
     
}
bool solve(vector<vector<char>>&board,int i,int j){
    if(j==9){
    return    solve(board,i+1,0); 
    }
    if(i==9){
        return  true;
    }
    if(board[i][j]!='.')
     return solve(board,i,j+1); 

      for(int checkk=1;checkk<=9;checkk++){
char check=checkk+'0';
                    if(canput(board,i,j,check)){
board[i][j] = check;

if(solve(board,i,j+1)){
    return true;
}

board[i][j] = '.';
 
                    }
      }
 return false;
}
    void solveSudoku(vector<vector<char>>& board) {
       solve(board, 0, 0);

             
        
         
    return ;}
};