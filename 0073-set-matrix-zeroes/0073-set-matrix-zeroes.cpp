class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int row=matrix.size();
      int column=matrix[0].size();
      int rowzero=1;
      int columnzero=1;
  for(int i=0;i<row;i++){
if(matrix[i][0]==0){
    rowzero=0;
    break;
}
  }
    for(int i=0;i<column;i++){
if(matrix[0][i]==0){
    columnzero=0;
    break;
}
  }
for(int i=1;i<row;i++){
    for(int j=1;j<column;j++){
if(matrix[i][j]==0){
matrix[i][0]=0;
matrix[0][j]=0;
j++;
i++;
}    }
}
for(int i=1;i<row;i++){
if(matrix[i][0]==0){
    for(int k=0;k<column;k++){
        matrix[i][k]=0;
    }
}

}
for(int i=1;i<column;i++){
if(matrix[0][i]==0){
    for(int k=0;k<row;k++){
        matrix[k][i]=0;
    }
}

}
if(rowzero==0){
    for(int i=0;i<row;i++){
        matrix[i][0]=0;
    }
}
if(columnzero==0){
    for(int i=0;i<column;i++){
        matrix[0][i]=0;
    }
}







 






    return;
    }
    
};